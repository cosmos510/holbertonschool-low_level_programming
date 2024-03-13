#include "dog.h"
/* */
/**
* new_dog - function that create a new dog
* @name: pname of the dog
 * @age: age of the dog
 * @owner: owner's name
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	ndog = malloc(sizeof(struct dog));

	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return(ndog);

}
