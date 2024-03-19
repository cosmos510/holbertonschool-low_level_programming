#include <stdlib.h>
#include <stdio.h>
/* */
/**
* main - function
* @argc: number of agu
* @argv: pointer to the argu
* Return: int
*/
int main(int argc, char *argv[])
{
	int n_bytes, i = 0;
	char *tmp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error");
		exit(2);
	}
	tmp = (char*)main;

	while (i < n_bytes)
	{
		printf("%02x ", tmp[i]);
		i++;
	}
	printf("\n");
}
