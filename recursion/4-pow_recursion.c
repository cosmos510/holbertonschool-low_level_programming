#include "main.h"
/* */
/**
* pow_recursion - main fonction that hat returns the value
* of x raised to the power of y.
* @x: number to calculate the power of
* @y: the power of x
* Return: power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
