#include "main.h"
#include "3-print_numbers.c"
/* */
/**
* more_numbers - main fonction that print numbers, from 0 to 14
* 10 times.
*/
void more_numbers(void)
{
	int i = 0;
	int b = 0;

	while (i < 10)
	{
		print_numbers();

		for (b = '0'; b <= '4'; b++)
		{
			_putchar('1');
			_putchar(b);
		}
		i++;
		_putchar('\n');
	}
}
