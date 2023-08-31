#include "binary_trees.h"

/**
 * array_to_bst - Builds a bst from an array
 * @array: pointer to the first element
 * @size: no. of elements in array
 * Return: A pointer to root node
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t k, j;

	if (array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < j; k++)
		{
			if (array[k] == array[j])
				break;
		}
		if (k == j)
		{
			if (bst_insert(&tree, array[j]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
