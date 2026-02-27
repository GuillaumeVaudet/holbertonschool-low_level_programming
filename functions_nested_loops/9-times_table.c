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

			if (j == 0)
			{
				_putchar(result + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');

				if (result > 9)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(result + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
