#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: list_t - entry point of the list
 * Return: site_t - number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
			h = h->next;
			number_of_nodes++;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
