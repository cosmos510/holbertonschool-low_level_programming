#include "main.h"
/**
* puts2 - main function that prints every other character of a string
* @str: number to update the value
*/
/*void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
*/

void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (*str == 0)
			_putchar('\n');
		else if (i % 2 == 0)
		{
			_putchar(*str);
			puts2(str + 1);
		}

	}
}
