#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - found a specific nth node of a dlistint list
 * @head: dlistint - head of the list
 * @index: unsigned int - index of tje node searched
 * Return: pointer to the searching node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (i < index)
	{
		head = head->next;
		i++;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
