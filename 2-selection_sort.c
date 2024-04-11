#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, jMin;
	int swap;

	for (i = 0; i < size - 1; i++)
	{
		jMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}
		if (array[jMin] != array[i])
		{
			swap = array[i];
			array[i] = array[jMin];
			array[jMin] = swap;
			print_array(array, size);
		}
	}
}
