#include "main.h"
/**
* puts_half - main function that prints half of the string
* @str: number to update the value
*/
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[len / 2 + i]);
	}
	_putchar('\n');
}
