#include "variadic_functions.h"

/**
 * print_c - prints characters.
 * @ptr: Pointer
 */

void print_c(va_list *ptr)
{
	printf("%c", va_arg(*ptr, int));
}

/**
 * print_i - prints integers.
 * @ptr: Pointer
 */

void print_i(va_list *ptr)
{
	printf("%i", va_arg(*ptr, int));
}

/**
 * print_fl - prints float.
 * @ptr: Pointer
 */

void print_fl(va_list *ptr)
{
	printf("%f", va_arg(*ptr, double));
}

/**
 * print_s - prints string.
 * @ptr: Pointer
 */

void print_s(va_list *ptr)
{
	char *a;

	a = va_arg(*ptr, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}

/**
 * print_all - Function that prints anything.
 * @format: list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{

	char *sep = "";
	int i, j = 0;
	va_list ptr;

	print_f opt[] = {
	{'c', print_c},
	{'i', print_i},
	{'f', print_fl},
	{'s', print_s},
	{'\0', NULL}
	};

	va_start(ptr, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (opt[i].symbol != '\0')
		{
			if (opt[i].symbol == format[j])
			{
				printf("%s", sep);
				opt[i].f(&ptr);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(ptr);
}
