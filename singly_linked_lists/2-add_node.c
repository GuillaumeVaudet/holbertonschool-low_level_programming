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
 * add_node - adds a new node at the beginning of a list
 * @head: current head of the list
 * @str: string to put in the new node
 * Return: list_t - pointer to the new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
