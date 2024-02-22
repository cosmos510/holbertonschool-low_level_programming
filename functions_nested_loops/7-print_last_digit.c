#include "main.h"
#include "6-abs.c"
/*  */
/**
* print_last_digit - main fonction that prints the alphabet
* @r: input number
* Return: last digit
*/
int print_last_digit(int r)
{
	int l_d;

	l_d = _abs(r % 10);
	_putchar('0' + l_d);

	return (l_d);
}
