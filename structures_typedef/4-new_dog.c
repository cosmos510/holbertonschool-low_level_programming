#include "dog.h"
char *_strdup(char *str);

/* */
/**
* new_dog - function that create a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner's name
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(struct dog));

	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->name = _strdup(name);
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
	}
	ndog->age = age;
	ndog->owner = _strdup(owner);
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
	}

	return (ndog);
}

/* */
/**
* _strdup - function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
* @str: char to duplicate
* Return:  a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len += 1;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
