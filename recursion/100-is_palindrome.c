#include "main.h"
/* */
/**
* is_palindrome - main fonction that check if the string is palindrome
* @s: input char
* Return: 1 if palindrome
*		   0 if no palindrome
*/

int is_palindrome(char *s);
int check_pal(char *s, int len);
int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (*s == '\0')
		return (0);
	return (check_pal(s, len));
}

/* */
/**
* check_pal - main fonction that check if the string is palindrome
* @s: input char
* @len: lenght of the string
* Return: 1 if palindrome
*		   0 if no palindrome
*/

int check_pal(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);
	return (check_pal(s + 1, len - 2));
}

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
