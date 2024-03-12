#include "main.h"
/* */
/**
* array_range - function that creates an array of integers.
* @min: start of the array range
* @max: end of the array range
* Return:  pointer to new memory space
*/
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size* sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size && min < max; i++)
		array[i] = min ++;

	return (array);
}
