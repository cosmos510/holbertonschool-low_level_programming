#include "main.h"
#include "_putchar.c"
/**
* rev_string - main function that prints a string in reverse
* @s: number to update the value
*/
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	while (len - 1 >= i)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
	}
}
