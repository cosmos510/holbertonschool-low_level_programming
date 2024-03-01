#include "main.h"
/**
* _strncpy - main function that copy string
* @dest: destination to copy
* @src: source
* @n: number bytes
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < n && *src; i++)
		dest[i] = src[i];
	return (dest);
}

