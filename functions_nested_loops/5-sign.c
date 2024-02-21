#include "main.h"
/*  */
/**
* print_sign - main fonction that prints the alphabet
* @n: input number
* Return: 1 if c alphabetic
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	return (2);
}
