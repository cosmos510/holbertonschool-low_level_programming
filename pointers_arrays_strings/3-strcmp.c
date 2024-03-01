#include "main.h"
/**
* _strcmp - main function that compares two strings
* @s1: char to compare
* @s2: char to compare to
* Return: diff
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while(s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			diff = 0;
		i++;
	}
	return(diff);
}
