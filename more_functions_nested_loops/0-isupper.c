#include "main.h"
/* */
/**
* _isupper - main fonction that checks for uppercase character.
* @c: input har
* Return: 1 if uppercase
* Return: 0 if not uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (1);

	return(0);
}
