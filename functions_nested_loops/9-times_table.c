#include "main.h"
/*  */
/**
* times_table - main fonction that prints the times tables
* Return: times tables
*/
void times_table(void)
{
	int n, multiplicator, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (multiplicator = 1; multiplicator <= 9; multiplicator++)
		{
			_putchar(',');
			_putchar(' ');
			result = n * multiplicator;
			if (result > 9)
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
