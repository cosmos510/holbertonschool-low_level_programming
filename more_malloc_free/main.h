#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
