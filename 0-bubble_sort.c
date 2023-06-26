#include "sort.h"

/**
  * bubble_sort - A function for bubble sorting
  * @array: The array to sort
  * @size: The length of the aaray
  *
  * Return: void
  */
void bubble_sort(int *array, size_t size)
{
        size_t i = 0, j = 0;
        int len = 0;

        if (array == NULL || size == 0)
                return;
        for (; i < size - 1; i++)
        {
                for (j = 0; j < size - i - 1; j++)
                {
                        if (array[j] > array[j + 1])
                        {
                                len = array[j + 1];
                                array[j + 1] = array[j];
                                array[j] = len;
                                print_array(array, size);
                        }
                }
        }
}
