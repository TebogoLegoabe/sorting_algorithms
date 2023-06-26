#include "sort.h"

/**
 * selection_sort - A function that sorts elements using selection sort algorithm
 * @array: An array to sort
 * @size: The size of the array
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	int len = 0;
	size_t i = 0, j = 0, k = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (k != i)
		{
			len = array[i];
			array[i] = array[k];
			array[k] = len;
			print_array(array, size);
		}
	}
}
