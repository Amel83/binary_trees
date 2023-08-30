#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree (BST)
 * @tree: Pointer to the root node of the tree to check
 *
 * This function checks whether the given binary tree is a valid Binary Search Tree (BST)
 * according to the properties of a BST. It recursively checks each node and its children.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
    return binary_tree_is_bst_recursive(tree, NULL, NULL);
}

/**
 * binary_tree_is_bst_recursive - Helper function for binary_tree_is_bst
 * @tree: Pointer to the root node of the tree to check
 * @min: Pointer to the minimum value constraint
 * @max: Pointer to the maximum value constraint
 *
 * This function recursively checks whether the given binary tree is a valid Binary Search Tree (BST)
 * within the specified value constraints.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst_recursive(const binary_tree_t *tree, const int *min, const int *max)
{
    if (tree == NULL)
        return 1;

    if ((min && tree->n <= *min) || (max && tree->n >= *max))
        return 0;

    return (binary_tree_is_bst_recursive(tree->left, min, &tree->n) &&
            binary_tree_is_bst_recursive(tree->right, &tree->n, max));
}
