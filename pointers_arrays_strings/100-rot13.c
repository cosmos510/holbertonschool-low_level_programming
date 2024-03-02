#include "main.h"
/**
* rot13 - main function that prints half of the string
* @s: number to update the value
* Return: char transformed
*/
char *rot13(char *s)
{
	char in[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};

	char out[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
				 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	int i = 0;
	int count;
	int num = 52;

	while (s[i])
	{
		count = 0;
		while (count < num)
		{
			if (s[i] == in[count])
			{
				s[i] = out[count];
				break;
			}
			count++;
		}
		i++;
	}
	return (s);
}
