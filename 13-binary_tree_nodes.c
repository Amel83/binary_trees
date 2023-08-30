#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the nodes which have min 1.
 * @tree: pointer to the root node tree.
 * Return: return node count.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left->parent == NULL && tree->right->parent == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

