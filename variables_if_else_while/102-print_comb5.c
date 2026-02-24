#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	i = '0';

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
