#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (1 + (left_height > right_height ? left_height : right_height));

	}
	return (-1);
}
