#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root or not
 * @node: A pointer to the node
 * Return: 1 if root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
