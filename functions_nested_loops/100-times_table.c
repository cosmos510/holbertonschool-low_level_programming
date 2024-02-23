#include "main.h"
/*  */
/**
* print_times_table - main fonction that prints the times tables n times
* @n: input number
*/
void print_times_table(int n)
{
	int num, multiplicator, result;

	if (n >= 0 && n < 16)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (multiplicator = 1; multiplicator <= n; multiplicator++)
			{
				_putchar(',');
				_putchar(' ');
				result = num * multiplicator;
				if (result > 9 && result < 100)
				{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				if (result >= 100)
				{
					_putchar('0' + result / 100);
					_putchar('0' + result / 10 % 10);
					_putchar('0' + result % 10);
				}
			}
			_putchar('\n');
		}
	}

}
