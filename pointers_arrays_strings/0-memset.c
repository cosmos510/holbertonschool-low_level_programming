#include "main.h"
/**
* _memset - main function that  fills memory with a constant byte
* @s: Starting address of memory to be filled
* @b: Value to be filled
* @n: Number of bytes to be filled starting
* Return: s after _memset
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n > 0)
	{
		*temp = b;
		temp++;
		n--;
	}
	return (s);
}
