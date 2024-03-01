#include "main.h"
/**
* reverse_array - main function that reverse aray
* @a: char to reverse
* @n: number of element in the array
* Return: diff
*/
void reverse_array(int *a, int n)
{
	int *i, *j, temp;

	i = a;
	j = a + (n - 1);

	while (i < j)
	{
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;
	}
}
