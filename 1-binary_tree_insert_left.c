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

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);	
}
