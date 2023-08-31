#include "binary_trees.h"

/**
 * binary_tree_is_bst_recursive - Helper function
 * @tree: Pointer to the root node
 * @min: Pointer to the minimum
 * @max: Pointer to the maximum
 * Return: 1 if the tree is a BST
 */

int binary_tree_is_bst_recursive(const binary_tree_t *tree,
		const int *min, const int *max)
{
	if (tree == NULL)
		return (1);
	if ((min && tree->n <= *min) || (max && tree->n >= *max))
		return (0);
	return (binary_tree_is_bst_recursive(tree->left, min, &tree->n) &&
			binary_tree_is_bst_recursive(tree->right, &tree->n, max));
}

/**
 * binary_tree_is_bst - Checks binary tree validity
 * @tree: Pointer to the root node
 * Return: 1 if the tree is a valid
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (binary_tree_is_bst_recursive(tree, NULL, NULL));
}
