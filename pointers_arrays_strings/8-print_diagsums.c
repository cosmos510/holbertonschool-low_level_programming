#include "main.h"
#include <stdio.h>
/* */
/**
* print_diagsums - main function that prints the sum of
* the two diagonals of a square matrix of integers.
* @a: array
* @size: size of the array
*/
void print_diagsums(int *a, int size)
{
	int x = 0;
	int sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + x];
		sum2 += a[(x + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
