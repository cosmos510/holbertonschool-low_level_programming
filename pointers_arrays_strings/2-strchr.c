#include "main.h"
/* */
/**
* _strchr - main function that  fills memory with a constant byte
* @s: The string in which the character is searched.
* @c: The character that is searched in the string str
* Return: part of the input string starting from the first occurrence
* of the specified character.
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	char *temp = s;

	if (s[i] == '\0')
		return (NULL);
	while (s[i] != '0')
	{
		if (s[i] == c)
			temp = s - 1;
		s++;
	}
	return (temp);
}
