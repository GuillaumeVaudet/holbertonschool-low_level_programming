#include "dog.h"
#include <stdlib.h>
/**
* _strlen - determine string length
* @str: string - string that we want to know the length
* Return: int - string length (success) - -1 if failed
*/
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
* _strcpy - copy a string
* @src: string - source to copy
* @dest: pointer to char - destination for copy
* Return: pointer of char - dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
* new_dog - create a new element based on struct dog
* @name: string - dog's name
* @age: float - dog's age
* @owner: string - dog's owner's name
* Return: pointer to allocated memory for new dog (success) - NULL if failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
