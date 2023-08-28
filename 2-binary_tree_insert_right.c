#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree
 * @parent: Pointer to the parent node
 * @value: Value of the added node
 * Return: Pointer to the new added valu
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_trees_t));
	if (new == NULL || parent == NULL)
		return (NULL);
	new->n = value;
	if (parent->right) == NULL
	{
		new->parent = parent;
		new->left = NULL;
	}
	new->right = parent->right;
	new->parent = parent;
	new->left = null;
	
	return (new);	
}
