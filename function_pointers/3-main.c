#include "3-calc.h"
/* */
/**
* main - function
* @argc: number of agu
* @argv: pointer to the argu
* Return: int
*/
int main(int argc, char *argv[])
{
	char *operation;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = argv[2];

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(operation)(num1, num2));
	return (0);
}
