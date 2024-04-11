#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp, permut;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		permut = 0;
		k = i - 1;
		for (j = 0; j < size - k; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				permut = 1;
				print_array(array, size);
			}
		}
		if (permut == 0)
			break;
	}
}
