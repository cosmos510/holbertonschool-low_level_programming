#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Structure of dog struc
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
