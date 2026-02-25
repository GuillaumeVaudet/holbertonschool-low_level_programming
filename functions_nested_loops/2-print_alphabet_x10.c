#include "main.h"

/**
* print_alphabet_x10 - Print alphabet ten time in lowercase
* using _putchar
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int a;
	int i;

	a = 97;
	i = 0;

	while (i < 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		a = 97;
		i++;
		_putchar('\n');
	}

}
