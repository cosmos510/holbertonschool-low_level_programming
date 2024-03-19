#include "variadic_functions.h"
/* */
/**
* print_numbers - function that returns the sum of all its parameters
* @separator: string to be printed between numbers
* @n: number of int passed to the function
* Return: all number
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		if (separator != NULL)
		{
			if (i == (n - 1))
			printf("%d", va_arg(list, int));
			else
			printf("%d%s", va_arg(list, int), separator);
		}
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		i++;
	}
	printf("\n");

}
