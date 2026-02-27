#include "main.h"
/**
* print_most_numbers - prints the numbers from 0 to 9 not 2 and 4
*
* Return: void
*/

void print_most_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		if (i != '4' && i != '2')
		{
			_putchar(i);
		}
		i++;

	}
	_putchar('\n');
}
