#include "main.h"

/**
* times_table - print the 9 times tables starting with 0
*
* Return: void
*/

void times_table(void)
{
	int i;
	int j;
	int result;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		while (j < 10)
		{
			result = i * j;

			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (result < 81)
				{
					_putchar(',');
					_putchar(' ');
				}
			} else
			{
				_putchar(' ');
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
