#include "main.h"
/* */
/**
* str_concat - function that concatenates two strings
* @s1: char orginal
* @s2: char to add to s1
* Return:  a pointer to concatenates string
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int len = 0;
	int i;
	char *s;

	if (s1 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		len1 += 1;
	for (i = 0; s1[i]; i++)
		len2 += 1;
	len = len1 + len2;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = s1[i];
	for (i = 0; i < len; i++)
		s[i + len1] = s2[i];


	return (s);
	free(s);
}
