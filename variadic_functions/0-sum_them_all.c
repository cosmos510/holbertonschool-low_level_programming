#include "variadic_functions.h"
/* */
/**
* sum_them_all - function that returns the sum of all its parameters
* @n: argu required
* Return: the sum of all params
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
