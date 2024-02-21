#include "main.h"
/*  */
/**
* _islower - main fonction that prints the alphabet
* Return: 1 if c lowercase
* Return: 0 other case
*/
int _islower(int c)
{

	if ( c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
