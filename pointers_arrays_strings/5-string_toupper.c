#include "main.h"
/**
* string_toupper - main function that that changes all
* lowercase letters of a string to uppercase.
* @s: char to change
*/
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	if (s[i -1] != '\n')
		s[i] = s[i] + '\n';
	return (s);
}
