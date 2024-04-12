#include "sort.h"
#include <stdio.h>

/**
 * swap - echange deux elements dans un tableau
 * @a: pointer to the first element
 * @b: pointer to the second element
 * Return: pointer change
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Partitionne le tableau en utilisant
 * le schéma de partition Lomuto
 * @array: Tableau à partitionner
 * @low: Indice de début de la partition
 * @high: Indice de fin de la partition
 * @size: Taille du tableau
 *
 * Return: Indice de l'élément pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;

			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_recursive - recursively of array to use quick_sort
 * @array: pointer to tried
 * @low: indice debut du tableau
 * @high: indice fin du tableau
 * @size: size of array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: pointer to tried
 * @size: size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_recursive(array, 0, size - 1, size);
}
