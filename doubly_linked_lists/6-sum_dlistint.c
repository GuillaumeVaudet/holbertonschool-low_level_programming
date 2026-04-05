#include "lists.h"
/**
 * sum_dlistint - adds data (n) of a dlistint_t list
 * @head: dlistint - head of the list
 * Return: int - the sum if success and 0 if failed
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
