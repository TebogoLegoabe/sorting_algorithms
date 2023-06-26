#include "sort.h"

/**
 * shell_sort - Sorts an array using the Shell sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: Void
 */
void shell_sort(int *array, size_t size)
{
    size_t i, j, gap;
    int temp;

    if (array == NULL || size < 2)
        return;

    for (gap = 1; gap < size / 3; gap = gap * 3 + 1)
        ;

    for (; gap > 0; gap /= 3)
    {
        for (i = gap; i < size; i++)
        {
            temp = array[i];
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
            {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
        print_array(array, size);
    }
}
