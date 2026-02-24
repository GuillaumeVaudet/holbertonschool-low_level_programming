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
	int n;
	int l;

	n = '0';

	while (n < '9')
	{
		l = n + 1;
		while (l <= '9')
		{
			putchar(n);
			putchar(l);
			if (l <= '9' && n != '8')
			{
				putchar(',');
				putchar(' ');
			}
			l++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
