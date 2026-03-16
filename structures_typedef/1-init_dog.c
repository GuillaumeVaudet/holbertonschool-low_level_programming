#include "dog.h"

/**
* init_dog - initiate new dog variable based on dog struc
* @d: struct dog - pointer to fill
* @name: pointer of char - name of the dog
* @age: float - used to fill the dog's age
* @owner: pointer of char - used to fill the dog's owner name
* Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
