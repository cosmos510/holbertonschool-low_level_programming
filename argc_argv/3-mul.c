#include "main.h"
#include <stdlib.h>
/* */
/**
* main - main fonction that multiplies two numbers.
* @argc: number argument
* @argv: array of argument
* Return: 0 is all good
*/
int main(int argc, char **argv)
{
	int i;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	if (argc <= 2)
		printf("Error\n");
	return (0);
}
