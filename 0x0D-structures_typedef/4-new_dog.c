#include "dog.h"
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * new_dog - creates a new dog
 * @name:name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	if (name != NULL)
	{
		new_dog->name = malloc(sizeof(char*) * name_len);
		if (new_dog->name == NULL)
		{
			free (new_dog);
			return (NULL);
		}
		new_dog->name = name;
	}

	if (owner != NULL)
	{
		new_dog->owner = malloc(sizeof(char*) * owner_len);
		if (new_dog->owner == NULL)
		{
			free (new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = owner;
	}

	new_dog->age = age;

	return (new_dog);

}
