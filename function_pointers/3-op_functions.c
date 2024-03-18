#include "3-calc.h"
/* */
/**
* op_add - function that add two int
* @a: int to add
* @b: int to add
* Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - function that substract two int
* @a: int to sub
* @b: int to sub
* Return: the substraction of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - function that multiply two int
* @a: int to mul
* @b: int to mul
* Return: the mul of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - function that divide two int
* @a: int to div
* @b: int to div
* Return: the div of a and b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - function that modulo two int
* @a: int to modulo
* @b: int to modulo
* Return: the modulo of a and b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

