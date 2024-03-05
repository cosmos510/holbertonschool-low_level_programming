#include "main.h"

/**
 * check_square - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @sqr: The number to be tested.
 *
 * Return:  the square root if have one.
 *         else  -1.
 */

int check_square(int num, int sqr)
{
	if (num * num == sqr)
		return (num);
	if (num * num > sqr)
		return (-1);
	return (check_square(num + 1, sqr));
}

/**
* _sqrt_recursion - main fonction that returns the natural
* square root of a number.
* @n: number to calculate natural sqaure root of
* Return: square
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_square(1, n));
}
