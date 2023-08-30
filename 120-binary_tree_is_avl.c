#include "binary_trees.h"

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid AVL Tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    int height_diff = binary_tree_balance(tree);

    if (height_diff <= 1 && height_diff >= -1 &&
        binary_tree_is_avl(tree->left) && binary_tree_is_avl(tree->right))
        return 1;
    
    return 0;
}
