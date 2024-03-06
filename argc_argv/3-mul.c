#include "main.h"
#include <stdlib.h>
/* */
/**
* main - main fonction that prints all arguments it receives.
* @argc: number argument
* @argv: array of argument
* Return: 0 is all good
*/
int main(int argc, char **argv)
{
	int i;
	int mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	if (argc <= 1)
		printf("Error\n");
	return(0);
}
