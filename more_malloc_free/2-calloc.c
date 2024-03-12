#include "main.h"
char *_memset(char *s, char b, unsigned int n);
/* */
/**
* _calloc - function that allocates memory for an array,
* @nmenb: number of elements
* @size: size of the elements
* Return:  pointer to new memory space
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int tot_size;

	if (size == 0 || nmemb == 0)
		return (NULL);

	tot_size = nmemb * size;

	ptr = malloc(tot_size);

	if (ptr == NULL)
		return (NULL);
	if (ptr != NULL)
		_memset(ptr, 0, tot_size);
	return (ptr);
}

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
