#include "main.h"
#include <stdlib.h>
/* */
/**
* main - main fonction that add positive number.
* @argc: number argument
* @argv: array of argument
* Return: 0 is all good
*		 Error is not int passed in argument
*/
int main(int argc, char **argv)
{
	int i, next;
	int add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (next = 0; argv[i][next]; next++)
				if (argv[i][next] < '0' || argv[i][next] > '9')
					return (printf("Error\n"));
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
