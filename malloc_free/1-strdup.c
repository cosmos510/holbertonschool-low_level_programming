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

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len += 1;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
