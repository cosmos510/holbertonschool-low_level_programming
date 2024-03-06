#include "main.h"
/* */
/**
* main - main fonction that prints the number of arguments passed into it.
* @argc: number argument
* @argv: array of argument
* Return: 0 is all good
*/
int main(int argc, char __attribute__((__unused__))**argv)
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
