#include"main.h"
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char **argv)
{
	char *buffer;
	int o, to, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	o = open(argv[1], O_RDONLY);
	r = read(o, buffer, 1024);
	to = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (o == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	while (r > 0)
	{
		w = write(to, buffer, r);
		r = read(o, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close(o), close(to);
	if (close(o) == -1 || close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", argv[1]);
		exit(100);
	}
	return (0);
}
