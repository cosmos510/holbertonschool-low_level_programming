#include "main.h"
/* */
/**
* _strlen_recursion - main fonction that
* returns the length of a string
* @s: input char
* Return: len
*/
int factorial(int n)
{

	if (n == 0)
		return (-1);
	return (n * factorial(n - 1));

}
