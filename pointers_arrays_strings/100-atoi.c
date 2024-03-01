#include "main.h"
/**
* _atoi - main ffunction that convert a string to an integer
* @s: char to convert
* Return: dest
*/
int _atoi(char *s)
{
	int i, c;
	int sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			{
				c = 1;
				num = (num * 10) + (s[i] - '0');
			}
		else if (c == 1)
			break;
	}
	return (num * sign);
}
