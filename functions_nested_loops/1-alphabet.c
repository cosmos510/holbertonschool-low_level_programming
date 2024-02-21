#include "main.h"
/* Print _putchar */
/**
* main - main fonction that prints the alphabet
* Return: 0 if no problem
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar (ch);
	}
	_putchar ('\n');

	return (0);
}
