#include <stdlib.h>
#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST)
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: The value to store in the node to be inserted
 *
 * This function inserts the given value into the Binary Search Tree (BST)
 * pointed to by the root `tree`. If the tree is empty, the created node
 * becomes the root. If the value already exists in the tree, it is ignored.
 *
 * Return: A pointer to the created node, or NULL on failure
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
