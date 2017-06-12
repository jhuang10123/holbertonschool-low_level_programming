#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>

/**
 * struct dog - new structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*HOLBERTON*/
