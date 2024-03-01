#include "main.h"
/**
* mleet - main function that encodes a string into 1337.
* @s: char to change
* Return: encode sentences
*/
char *leet(char *s)
{
	char letter[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char number[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i = 0;
	int count;
	int num = 10;

	while (s[i])
	{
		count = 0;
		while (count < num)
		{
			if (s[i] == letter[count])
				s[i] = number[count];
			count++;
		}
		i++;
	}
	return (s);
}
