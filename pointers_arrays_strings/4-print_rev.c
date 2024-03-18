#include "main.h"
/* */
/**
* print_rev - main function that prints a string in reverse
* @s: number cto update the value
*/
/*
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
*/



void print_rev(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		print_rev(s);
		_putchar(*s);
	}
	_putchar('\n');
}
