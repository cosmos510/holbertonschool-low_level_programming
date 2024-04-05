#include"main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters:  is the number of letters it should read and print
 * Return: If 0 if problem
 *         Otherwise - number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_r, n_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	n_r = read(fd, buffer, letters);
	n_w = write(STDOUT_FILENO, buffer, n_r);

	if (n_w == -1 || n_r == -1 || fd == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return (n_r);
}
