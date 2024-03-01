#include "main.h"
/**
* reverse_array - main function that that reverses the
* content of an array of integers.
* @a: char to reverse
* @n: number of element in the array
* Return: diff
*/
void reverse_array(int *a, int n)
{
	int *i, *j;
	int temp;

	i = a;
	j = a + n;

	while (i < j)
	{
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;
	}

}
