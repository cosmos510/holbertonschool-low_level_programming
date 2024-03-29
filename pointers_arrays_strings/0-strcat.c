#include "main.h"
/**
* _strcat - main function that concatenates two strings
* @dest: dest to add to src
* @src: source
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
		dest[len + i] = src[i];
	return (dest);
}
