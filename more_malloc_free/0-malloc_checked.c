#include "main.h"
/* */
/**
* malloc_checked - function that allocates memory using malloc
* @b: size
* Return:  a 2d array of int
*/
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

