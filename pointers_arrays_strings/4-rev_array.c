/**
* reverse_array - reverse the content of an array of integer
* @a: pointer of the target array to reverse
* @n: number of elements of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
