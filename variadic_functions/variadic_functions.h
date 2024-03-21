#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * struct printc - A new struct type defining a printer.
 * @symbol: A symbol representing a data type.
 * @f: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct print
{
	char symbol;
	void (*f)(va_list *);
} print_f;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
