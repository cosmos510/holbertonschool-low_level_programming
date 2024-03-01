#include "main.h"
/**
* cap_string - main function that capitalizes all words of a string.
* @s: char to change
* Return: string uppercase
*/
char *cap_string(char *s)
{
	int i = 0;

	while(s[i])
	{
		if(s[i] == ' ')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
