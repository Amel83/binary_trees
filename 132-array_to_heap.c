#include "binary_trees.h"

/**
 * array_to_heap - builds a heap tree
 * @array: pointer to the first element
 * @size: number of element in the array
 * Return: pointer to root node
 */

heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int j;
	heap_t *root = NULL;

	for (j = 0; j < size; j++)
		heap_insert(&root, array[j]);
	return (root);
}
