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

	/* Expected Output Result 0, 1, 2, 3, 4, 5, 6, 7, 8, 9*/
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
