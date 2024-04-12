#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, permut = -1;

	if (size < 2)
		return;
	while (permut)
	{
		permut = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				permut++;

				print_array(array, size);
			}
		}
	}
}
