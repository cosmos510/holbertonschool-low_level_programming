#include "main.h"
/* */
/**
* _strstr - main function unction finds the first occurrence
* of the substring needle in the string haystack
* @haystack: This is the main string to be examined.
* @needle: This is the sub-string to be searched in string.
* Return: ointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == *needle)
			{
				haystack = needle;
				return (haystack + i);
			}

		}
		haystack++;
		if (*needle == '\0')
			break;
	}
	return (0);
}
