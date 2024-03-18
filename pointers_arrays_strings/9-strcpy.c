#include "main.h"
/**
* _strcpy - main function that copy string
* @dest: destination to copy
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
