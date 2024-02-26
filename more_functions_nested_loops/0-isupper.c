#include "main.h"
/* */
/**
* _isupper - main fonction that checks for uppercase character.
* @c: input har
* Return: 1 if uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
