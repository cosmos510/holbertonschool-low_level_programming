#include "main.h"
/*  */
/**
* print_to_98 - fonction that prints the alphabet
* @n: input number
* Return: prints all natural numbers from n to 98, followed by a new line.
*/
void print_to_98(int n)
{
	for (; n < 98; n++)
		printf("%d, ", n);

	for (; n > 98; n--)
		printf("%d, ", n);
	printf("%d\n", n);
}
