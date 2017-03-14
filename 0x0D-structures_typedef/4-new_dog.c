#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t
 */
/* this is very wrong */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdogpt;
	int lenname, lenown;
	char *namecpy, *owncpy;

	lenname = _strlen(name);
	lenown = _strlen(owner);

	_strcpy(namecpy, name);
	_strcpy(owncpy, owner);

	if (newdogpt == NULL)
		return (NULL);

	newdogpt->age = age;

	if (name != NULL)
	{
		newdogpt->name = malloc(sizeof(dog_t) * lenname);
		if (newdogpt->name == NULL)
		{
			return (NULL);
		}
	}

	if (owner != NULL)
	{
		newdogpt->owner = malloc(sizeof(dog_t) * lenown);
		{
			if (newdogpt->name == NULL)
			{
				return (NULL);
			}
		}
	}

	return (newdogpt);

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
