#include "main.h"
/* */
/**
* _memcpy - main function that  fills memory with a constant byte
* @s: Starting address of memory to be filled
* @b: Value to be filled
* @n: Number of bytes to be filled starting
* Return : s after memset
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	while (n > 0)
	{
		*dest = *src;
		n--;
	}
	return (dest);
}
