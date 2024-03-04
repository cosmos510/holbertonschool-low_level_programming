#include "main.h"
/* */
/**
* _memcpy - main function that  fills memory with a constant byte
* @dest: Starting address of memory to be filled
* @src: Value to be filled
* @n: Number of bytes to be filled starting
* Return: dest after memcpy
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
