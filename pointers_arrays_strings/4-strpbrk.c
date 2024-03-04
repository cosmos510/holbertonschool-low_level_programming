#include "main.h"
/* */
/**
* _strpbrk - main function that gets the length of a prefix substring
* @s: string to be scanned
* @accept: string containing the characters to match
* Return: It returns a pointer to the character in s that
* matches one of the characters in accept, else returns NULL.
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
