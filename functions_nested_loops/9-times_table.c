#include "main.h"
/*  */
/**
* times_table - main fonction that prints the times tables
* Return: times tables
*/
void times_table(void)
{
	int n;
	int multiplicator;
	int result;


	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		for (multiplicator = 1; multiplicator <= 9; multiplicator++)
		{
			result = n * multiplicator;
			if (multiplicator != 9)
			{
				if (result > 9)
				{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
					_putchar(',');
				}
				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
					_putchar(',');
				}
			}
			else
			{
				if (result > 9)
				{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
			}
		}
		_putchar('\n');
	}
}
