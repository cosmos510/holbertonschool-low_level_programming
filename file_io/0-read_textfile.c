#include"main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_r, n_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename,O_RDONLY);

	if (fd == -1)
		return(0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return(0);
	}
	n_r = read(fd, buffer, letters);

	if (n_r == -1)
		return (0);

	n_w = write(1, buffer, letters);

	if (n_w == -1)
		return(0);

	return (n_r);

}
