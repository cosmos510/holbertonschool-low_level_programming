#include "main.h"
/* */
/**
* print_rev - main function that prints a string in reverse
* @s: number cto update the value
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len - 1 >= 0)
	{
		len--;
		_putchar(s[len]);

	}
	_putchar('\n');


}