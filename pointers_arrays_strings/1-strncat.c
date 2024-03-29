#include "main.h"
/**
* _strncat - main function that concatenates two strings
* @dest: dest to add to src
* @src: source
* @n: number bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	return (dest);
}
