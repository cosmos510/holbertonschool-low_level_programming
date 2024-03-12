#include "main.h"
/* */
/**
* _calloc - function that allocates memory for an array,
* @nmenb: number of elements
* @size: size of the elements
* Return:  pointer to new memory space
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	str = malloc(size * nmemb);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = nmemb;
	return (str);
}
