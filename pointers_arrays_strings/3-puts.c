#include "main.h"
/* */
/**
* _puts - main function that prints a string
* @str: number cto update the value
*/
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
