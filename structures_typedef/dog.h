#ifndef DOG_H
#define DOG_H

/**
* struct dog - define a dog object
* @name: string - used for the dog's name
* @age: integer - used for dog's age
* @owner: string - used for the dog's owner name
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
