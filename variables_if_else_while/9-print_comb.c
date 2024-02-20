#include <stdio.h>
/**
* main - print combination number
* Return: 0 if success
*/
int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	j = 44;
	k = 32;

	while (i <= 57)
	{
		putchar (i);
		if (i < 57)
		{
			putchar (j);
			putchar (k);
		}
		i++;
	}

	putchar ('\n');

	return (0);
}
