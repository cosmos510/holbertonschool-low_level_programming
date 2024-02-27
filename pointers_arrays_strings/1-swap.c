#include "main.h"
/* */
/**
* swap_int - main function that swaps the values of two integers.
* @a: input number
* @b: should equal at a
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
