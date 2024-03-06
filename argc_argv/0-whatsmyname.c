#include "main.h"
/* */
/**
* main - main fonction that prints the name of the programme
* @argc: number argument
* @argv: array of argument
* Return: 0 is all good
*/
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
