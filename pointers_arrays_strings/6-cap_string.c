#include "main.h"
/**
* cap_string - main function that capitalizes all words of a string.
* @s: char to change
* Return: string uppercase
*/
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] >= 'a' && s[i] <= 'z'; i++)
		s[i] = s[i] - 32;
	return (s);
}
