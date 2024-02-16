#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list
 * @h: Pointer to head of the doubly-linked list.
 * @n1: Pointer to first node to swap.
 * @n2: Pointer to second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - sort doubly-linked list of integers
 * @list: Pointer to head of doubly-linked list of integers
 * Description: Prints the list after each swap
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *it, *insrt, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (it = (*list)->next; it != NULL; it = temp)
	{
		temp = it->next;
		insrt = it->prev;
		while (insrt != NULL && it->n < insrt->n)
		{
			swap_nodes(list, &insrt, it);
			print_list((const listint_t *)*list);
		}
	}
}
