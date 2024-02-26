#include "main.h"
/* */
/**
* print_most_numbers - main fonction that print numbers, from 0 to 9
* excluding 2 et 4
*/
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		_putchar(c);
	}
	_putchar('\n');
}
