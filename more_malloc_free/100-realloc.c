#include "main.h"
/* */
/**
* _realloc - function that reallocates memory for an array,
* @ptr: number of elements
* @old_size: size of ptr
* @new_size: The size for the new memory block.
* Return:  pointer to new memory space
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	tmp = malloc(new_size);

return (tmp);
}
