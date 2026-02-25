#include "main.h"

/**
* _isalpha - check if arg is an alphabetic
* @c: The char to test
* Return: 1 if c is an alphabetic char and 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
