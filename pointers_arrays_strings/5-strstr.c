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
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
