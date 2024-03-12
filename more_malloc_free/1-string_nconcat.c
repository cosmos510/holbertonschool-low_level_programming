#include "main.h"
/* */
/**
* string_nconcat - function that concatenates two strings.
* @s1: char orginal
* @s2: char to add to s1
* @n: n bytes to s2 to concatenate
* Return:  pointer to new memory space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int  len1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1 += 1;

	ptr = malloc((len1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[i + len1] = s2[i];

	return (ptr);
}
