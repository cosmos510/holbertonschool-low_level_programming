#include "main.h"
/* */
/**
* print_trianngle - main fonction that prints traingle
* @size: number charactere
*/
void print_triangle(int size)
{
	int space, display;

	if (size > 0)
	{
		for (space = size; space > 0; space--)
		{
			for (display = 1; display <= size; display++)
			{
				if (display >= space)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}


