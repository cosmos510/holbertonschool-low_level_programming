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
	if (r < 0)
	{
		r = _abs(r);
		r = r % 10;
		r = _putchar('0' + r);
		return (r);
	}
	else
	{
		r = r % 10;
		r = _putchar('0' + r);
		return (r);
	}

}
