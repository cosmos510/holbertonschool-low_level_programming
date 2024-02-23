#include "main.h"
/*  */
/**
* print_times_table - main fonction that prints the times tables n times
* @n: input number
*/
int main(int n)
{
	int sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0)
		{
			sum += n;
		}
		else if (n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
}
