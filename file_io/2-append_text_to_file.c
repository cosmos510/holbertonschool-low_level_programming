#include"main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content:  text to write to the file
 *
 * Return: If 1 if success
 *         else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, o, n_w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;
	o = open(filename, O_WRONLY | O_APPEND);
	n_w = write(o, text_content, len);

	if (o == -1 || n_w == -1)
	{
		close(o);
		return (-1);
	}
	close(o);
	return (1);
}
