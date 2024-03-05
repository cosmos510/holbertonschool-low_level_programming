#include "main.h"
/* */
/**
* factorial - main fonction that
* returns the length of a string
* @s: input char
* Return: len
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));

}
