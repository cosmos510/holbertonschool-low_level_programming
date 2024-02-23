#include <stdio.h>
/*  */
/**
* main - main fonction that prints
* the sum of all the multiples of 3 or 5 below 1024
*
*/
int main(void)
{
	int n;
	int sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0)
			sum += n;
		if (n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return(0);
}
