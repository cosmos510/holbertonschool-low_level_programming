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
	char *str;
	va_list list;

	va_start(list, n);



	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

