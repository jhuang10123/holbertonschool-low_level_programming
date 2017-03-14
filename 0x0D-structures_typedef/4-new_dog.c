#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int lenname, lenown;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	if (name != NULL)
	{
		lenname = _strlen(name);

		new->name = malloc(sizeof(dog_t) * lenname);
		if (new->name == NULL)
		{
			free(new);
			return (NULL);
		}
		_strcpy(new->name, name);
	}

	if (owner != NULL)
	{
		lenown = _strlen(owner);

		new->owner = malloc(sizeof(dog_t) * lenown);
		{
			if (new->owner == NULL)
			{
				free(new->name);
				free(new);
				return (NULL);
			}
		}
		_strcpy(new->owner, owner);
	}
	new->age = age;
	return (new);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies a string
 *
 * @src: orig. string
 * @dest: copy of orig.
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}
