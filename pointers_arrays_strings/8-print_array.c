#include "main.h"
/**
* print_array - main function that prints half of the string
* @a: array
* @n number of elements in array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d ,", a[i]);
	}
	printf("\n");
}
