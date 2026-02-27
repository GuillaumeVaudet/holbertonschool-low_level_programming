#include "main.h"

/**
* jack_bauer - print every minute of the day starting from 00:00 to 23:59
*
* Return: void
*/

void jack_bauer(void)
{
	int hours;
	int minutes;

	hours = 0;
	minutes = 0;

	while (hours < 24)
	{
		while (minutes < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
			minutes++;
		}
	minutes = 0;
	hours++;
	}

}
