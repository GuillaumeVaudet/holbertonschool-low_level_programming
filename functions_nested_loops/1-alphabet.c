#include "main.h"

/**
* print_alphabet - Print alphabet in lowercase
* using _putchar
*
* Return: Always 0 (Sucess)
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
