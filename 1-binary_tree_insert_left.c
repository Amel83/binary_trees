#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree
 * @parent: Pointer to the parent node
 * @value: Value of the added node
 * Return: Pointer to the new added valu
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);
	new->n = value;
	if (parent->left == NULL)
	{
		new->parent = parent;
		new->right = NULL;
	}
	new->left = parent->left;
	new->parent = parent;
	new->right = NULL;
	
	return (new);	
}
