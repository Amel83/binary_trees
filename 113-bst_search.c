#include "binary_trees.h"

/**
 * bst_search - Searches for value bst
 * @tree: pointer to root node
 * @value: value to search in tree
 * Return: pointer to the node
 */

bst_t *bst_search(const bst_t *tree, int value)
{
    if (tree == NULL || tree->n == value)
        return (bst_t *)tree;

    if (value < tree->n)
        return bst_search(tree->left, value);
    else
        return bst_search(tree->right, value);
}
