#include "binary_trees.h"

/**
 * binary_tree_height - well well well
 * @tree: life is good
 * Return: o on something i guess
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}

/**
 * binary_tree_size - another one to explain
 * @tree: i luv ALX
 * Return: i love you alx
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - to be perfect
 * @tree: it has to be 2 childress
 * Return: onlu no odds like me
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, nodes = 0;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	return (nodes == (1 << height) - 1);
}
