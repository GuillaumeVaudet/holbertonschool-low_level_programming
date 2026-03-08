#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: 0;
 */


int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
