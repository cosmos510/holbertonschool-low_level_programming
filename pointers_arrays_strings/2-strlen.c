#include "main.h"
/* */
/**
* swap_int - main function that returns the length of a string
* @s: input number
* Return: lenght of a string
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

