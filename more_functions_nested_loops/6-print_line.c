#include "main.h"
/* */
/**
* print_line - main fonction that draws a straight line in the terminal
* @n: number charactere
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
