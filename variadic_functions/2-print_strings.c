#include "variadic_functions.h"
/* */
/**
* print_strings - function that prints strings
* @separator: string to be printed between numbers
* @n: number of int passed to the function
* Return: all number
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		if (separator != NULL)
		{
			if (i == (n - 1))
			printf("%s", va_arg(list, char *));
			else
			printf("%s%s", va_arg(list, char *), separator);
		}
		if (separator == NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

}

