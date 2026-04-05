#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: dlistint - head of the list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
