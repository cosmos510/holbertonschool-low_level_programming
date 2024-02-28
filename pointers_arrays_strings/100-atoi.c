#include "main.h"
/**
* _atoi - main ffunction that convert a string to an integer
* @s: char to convert
* Return: dest
*/
int _atoi(char *s)
{
	int i;
	int sign = 1;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');
		else if (s[i] > '9')
			break;
	}
	return (num * sign);
}
