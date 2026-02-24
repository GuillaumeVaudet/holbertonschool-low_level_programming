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
	int c;
	int n;

	c = 97;
	n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

		while (c <= 102)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
