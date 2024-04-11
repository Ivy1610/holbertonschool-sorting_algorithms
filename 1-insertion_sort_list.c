#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: pointer to the head of the doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *new_node = NULL, *next_node;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	new_node = *list;
	while (new_node != NULL)
	{
		listint_t *inser_order = new_node;
		listint_t *prev_node = new_node->prev;


		while (prev_node != NULL && inser_order->n < prev_node->n)
		{
			next_node = inser_order->next;

			if (next_node != NULL)
			{
				next_node->prev = prev_node;
			}
			inser_order->prev = prev_node->prev;
			prev_node->next = next_node;

			inser_order->next = prev_node;
			prev_node->prev = inser_order;

			if (inser_order->prev != NULL)
			{
				inser_order->prev->next = inser_order;
			}
			else
			{
				*list = inser_order;
			}
			prev_node = inser_order->prev;
			print_list(*list);
		}
		new_node = new_node->next;
	}
}
