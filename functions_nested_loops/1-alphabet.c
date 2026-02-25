#include "main.h"

/**
* print_alphabet - Print alphabet in lowercase
* using _putchar
*
* Return: 1 for success and -1 for error cf. _putchar
*/

void print_alphabet(void)
{
	int a;

	a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
