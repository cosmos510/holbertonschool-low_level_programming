#include "main.h"
int my_strlen(char *s);
/* */
/**
* argstostr - main function that concatenates all the arguments of the program
* @ac: number of argument
* @av: array of pointer to argument
* Return: a pointer to a new string
*/

char *argstostr(int ac, char **av)
{
	int tot_len = 0, ch_arg, argu, s_ind = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argu = 0; argu < ac; argu++)
		tot_len += my_strlen(av[argu]) + 1;

	s = malloc((tot_len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (argu = 0; argu < ac; argu++)
	{
		for (ch_arg = 0; av[argu][ch_arg]; ch_arg++, s_ind++)
			s[s_ind] = av[argu][ch_arg];
		s[s_ind] = '\n';
		s_ind++;
	}
	return (s);
}

/* */
/**
* my_strlen - main function that return length of a string
* @s: string to calculate the lenght
* Return: lenght
*/

int my_strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
