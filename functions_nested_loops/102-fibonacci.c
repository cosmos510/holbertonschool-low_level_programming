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
	unsigned long int number1, number2, next_num;
	number2 = 2;
	number1 = 1;
	printf("%ld, %ld", number1, number2);
	for (; i < 48; i++)
		{
		next_num = number1 + number2;
		printf(", %ld", next_num);

		number1 = number2;
		number2 = next_num;
	}
	printf("\n");
	return (0);
}
