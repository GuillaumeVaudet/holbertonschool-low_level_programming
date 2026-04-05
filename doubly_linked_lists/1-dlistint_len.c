#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - counts the number of nodes in a dlistint_t list.
 * @h: dlistint - head of list
 * Return: size_t - the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
