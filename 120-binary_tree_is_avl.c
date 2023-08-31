#include "binary_trees.h"

/**
 * binary_tree_is_avl - checks if AVL is valid
 * @tree: pointer to the root node
 * Return: 1 if tree is a valid
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height_diff;

	if (tree == NULL)
		return 0;
	height_diff = binary_tree_balance(tree);
	if (height_diff <= 1 && height_diff >= -1 &&
			binary_tree_is_avl(tree->left) && binary_tree_is_avl(tree->right))
		return 1;
	return 0;
}
