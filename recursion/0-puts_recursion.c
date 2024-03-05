#include "main.h"
/* */
/**
* _puts_recursion - main fonction that that prints a string,
* followed by a new line in recursive
* @s: input char
*/
void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
