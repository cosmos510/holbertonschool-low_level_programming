#include "main.h"
/* */
/**
* _strlen_recursion - main fonction that
* returns the length of a string
* @s: input char
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	while (*s)
	{
		i += 1;
		_strlen_recursion(s + 1);
		s++;
	}
	return (i);
}
