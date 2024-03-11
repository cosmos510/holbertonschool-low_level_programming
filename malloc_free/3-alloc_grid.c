#include "main.h"
/* */
/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers.
* @width: width of the array
* @height: height of the array
* Return:  a 2d array of int
*/
int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			return (NULL);
		}
	}
	return (array);
}
