#include <stdio.h>
/**
* main - print alphabet
* Return: 0 if success
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');

	return (0);
}
