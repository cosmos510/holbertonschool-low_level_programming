#include "main.h"
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

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
