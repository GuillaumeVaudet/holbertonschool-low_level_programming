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

	c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
