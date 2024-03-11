#include "main.h"
/* */
/**
* _strdup - function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
* @str: char to duplicate
* Return:  a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *s;

	while (str[len] != '\0')
	{	len++;
		str++;
	}
	if (len == 0)
		return (NULL);

	s = malloc(len * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
	free(s);

}
