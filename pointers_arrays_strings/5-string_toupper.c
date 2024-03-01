#include "main.h"
/**
* string_toupper - main function that that changes all
* lowercase letters of a string to uppercase.
* @s: char to change
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return(s);
}
