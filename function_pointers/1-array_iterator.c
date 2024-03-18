#include "function_pointers.h"
/* */
/**
* array_iterator -  function that executes a function given
* as a parameter on each element of an array.
* @array: array
* @size: size of the array
* @action: pointer to the function i need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (size > 0)
	{
		action(array[i]);
		size--;
		i++;
	}
}
