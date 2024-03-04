#include "main.h"
/* */
/**
* _strspn - main function that gets the length of a prefix substring
* @s: string to be scanned
* @accept: string containing the characters to match.
* Return: returns the number of characters in the initial segment of s
* which consist only of characters from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		char *check = accept;

		while (*check != '\0')
		{
			if (*s == *check)
			{
				count++;
				break;
			}
			check++;
		}
		if (*check == '\0')
			break;
		s++;
	}
	return (count);
}
