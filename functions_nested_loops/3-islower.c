#include "main.h"
/*  */
/**
* _islower - main fonction that prints the alphabet
* @c: islower: input character
* Return: 1 if c lowercase
* 
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
