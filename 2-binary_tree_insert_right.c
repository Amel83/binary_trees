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

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->parent = parent;
	}
	parent->right = new;
	
	return (new);	
}
