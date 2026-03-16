#include "dog.h"
#include <stdio.h>
/**
* print_dog - print a struct called dog
* @d: pointer to a type struct dog
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
