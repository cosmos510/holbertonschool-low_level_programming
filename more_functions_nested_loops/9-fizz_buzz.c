#include <stdio.h>
/*  */
/**
* main - fizz buzz
* Return: 0 if succes
*/
int main(void)
{
	int i = 2;

	printf("1");
	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);

	}
	printf("\n");
	return (0);
}
