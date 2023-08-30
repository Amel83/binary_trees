#include <stdlib.h>
#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in BST
 * @tree: Double pointer to the root node
 * @value: The value to store in the node 
 * Return: pointer to the created node
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		if (*tree == NULL)
			return (NULL);
		return (*tree);
	}
	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			if ((*tree)->left == NULL)
				return (NULL);
			return ((*tree)->left);
		}
		return (bst_insert(&((*tree)->left), value));
	}
	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			if ((*tree)->right == NULL)
				return (NULL);
			return ((*tree)->right);
		}
		return (bst_insert(&((*tree)->right), value));
	}
	return (NULL);
}
