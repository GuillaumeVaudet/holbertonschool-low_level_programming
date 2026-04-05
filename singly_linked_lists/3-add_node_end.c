#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - count the number of char in a str
 * @s: string
 * Return: int - number of char
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: list_t - head of the list to add a new node
 * @str: pointer - str to add in the new node
 * Return: the address of the new element, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	current = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
