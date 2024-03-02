#include "main.h"
/**
* print_number - main function that function that prints an integer.
* @n: number to print
*/
void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	b = n;
	if (b > 9)
		print_number(b / 10);
	_putchar(b % 10 + '0');
}
