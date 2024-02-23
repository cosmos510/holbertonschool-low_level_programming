#include <stdio.h>
/*  */
/**
* main - main fonction that prints
* the first 50 Fibonacci numbers
* Return: 0 if succes
*/
int main(void)
{
	int i = 0;
	int number1 = 1;
	int number2 = 2;
	long int next_num;

	printf("%d, %d", number1, number2);
	while (i <= 50)
	{
		next_num = number1 + number2;
		printf(", %lu", next_num);
		i++;
		number1 = number2;
		number2 = next_num;
	}
	printf("\n");
	return (0);
}
