#include "main.h"
/* */
/**
* print_square - main fonction that draws a straight line in the terminal
* @size: number charactere
*/
void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (width = 0; width < size; width++)
		{
			for (height = 0; height < size - 1; height++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
