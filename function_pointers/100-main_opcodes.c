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
	unsigned char *tmp;

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
	tmp = (unsigned char *)main;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02hhx ", tmp[i]);
	}
	printf("\n");
}
