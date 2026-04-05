#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: pointer - pointer of a node
 * Return: size_t - number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
