#include <stdio.h>
/*  */
/**
* main - main fonction that prints
* he sum of the even-valued terms
* Return: 0 if succes
*/
int main(void)
{
	unsigned long int number1, number2, sum_even;
	int i = 0;

	number1 = 1;
	number2 = 2;

	while (number1 + number2 <= 4000000)
		{
		number2 += number1;
		if (number2 % 2 == 0)
		{
			sum_even += number2;
		}
		number1 = number2 - number1;
		i++;
		}
	printf("%ld\n", sum_even);
	return (0);
}
