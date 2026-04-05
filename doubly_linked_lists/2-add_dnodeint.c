#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add a new node at the beginning of a dlistint list
 * @head: pointer of pointer - points to the head of the list
 * @n: int - integer to put into the new node
 * Return: pointer - pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
