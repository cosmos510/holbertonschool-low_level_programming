#include "main.h"
/* */
/**
* _isdigit - main fonction that checks for a digit (0 through 9).
* @c: input har
* Return: 1 if is digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
