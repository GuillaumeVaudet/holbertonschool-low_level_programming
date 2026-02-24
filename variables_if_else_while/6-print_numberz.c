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

	c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
