#include "main.h"
/*  */
/**
* _islower - main fonction that prints the alphabet
* @c: isalpha: input character
* Return: 1 if c alphabetic
*/
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
