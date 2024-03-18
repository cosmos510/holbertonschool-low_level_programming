#include "main.h"
/* */
/**
* _puts - main function that prints a string
* @str: input
*/
/*void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
*/
void _puts(char *str)
{
	if (*str == 0)
		_putchar('\n');
	else
	{
		_putchar(*str);
    	_puts(str + 1);
	}
}
