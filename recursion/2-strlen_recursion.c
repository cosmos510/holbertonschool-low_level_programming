#include "main.h"
/* */
/**
* _strlen_recursion - main fonction that
* returns the length of a string
* @s: input char
* Return: len
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
