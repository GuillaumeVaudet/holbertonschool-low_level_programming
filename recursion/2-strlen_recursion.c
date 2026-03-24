/**
* _strlen_recursion - return the lenght of a string
* @s: pointer to string
* Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
