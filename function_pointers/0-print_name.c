#include <stdlib.h>
/**
* print_name - prints a name from a function pointer
* @name: pointer to a string
* @f: pointer to a function that return void and take a char pointer as arg
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
