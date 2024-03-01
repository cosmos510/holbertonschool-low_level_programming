#include "main.h"
/**
* cap_string - main function that capitalizes all words of a string.
* @s: char to change
* Return: string uppercase
*/

char *cap_string(char *s)
{
	char cap[] = {',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}', ' ', '\t', '\n'};
	int i = 0;
	int capcount;
	int cspc = 13;

	while (s[i])
	{
		capcount = 0;
		while (capcount < cspc)
		{
			if ((i == 0 || s[i - 1] == cap[capcount]) && (s[i] >= 97 && s[i] <= 122))
				s[i] = s[i] - 32;
			capcount++;
		}
		i++;
	}
	return (s);
}
