#include "lists.h"
#include <stdlib.h>

/**
 * list_len - counts the number of elements in a linked list.
 * @h: list_t - entry point of the list
 * Return: size_t: number of elements of the linked list.
*/

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
