#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/* */
/**
* main - main fonction that add positive number.
* @argc: number argument
* @argv: array of argument
* Return: 0 is all good
*/
int main(int argc, char **argv)
{
	int i;
	int add = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc ; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	if (argc > 2)
		printf("Error");
	if (argc <= 2)
		printf("Error\n");
	return (0);
}
