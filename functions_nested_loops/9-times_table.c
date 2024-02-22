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
		for (multiplicator = 0; multiplicator <= 9; multiplicator++)
		{
			result = n * multiplicator;
			if(multiplicator != 9)
			{
				if (result > 9)
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
					_putchar(',');
					_putchar(' ');
				}
				if (result <= 9)
				{
					_putchar('0' + result);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				if (result > 9)
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				if (result <= 9)
				{
					_putchar('0' + result);
				}
			}
		}
		_putchar('\n');
	}
}
