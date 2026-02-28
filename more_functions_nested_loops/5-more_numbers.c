#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
*/

void more_numbers(void)
{
		int i;

		i = 0;

		while (i <= 14)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			} else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			i++;
		}
		_putchar('\n');
}
