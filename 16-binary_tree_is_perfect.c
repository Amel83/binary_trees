#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left =tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}

size_t binary_tree_size(const binary_tree_t *tree)         {                                                                  if (tree ==NULL)                                                   return (0);                                        return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));                                    }

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, nodes = 0;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	return (nodes == (1 << height) - 1);
}
