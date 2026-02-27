/**
* _isupper - check if a char is upper or not
* @c: char to test
* Return: 1 if c is upper and 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
