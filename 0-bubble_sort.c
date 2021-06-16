#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: array to be sorted
 * @size: lenght of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int aux;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((array[j] > array[j + 1]) && array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
                print_array(array, size);
			}
		}
	}
}
