#include "main.h"
#include "1-alphabet.c"
/* Print _putchar */
/**
* print_alphabet_x10 - main fonction that prints the alphabet 10x
* Return: 0 if no problem
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
