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
 * _strcpy - copy string from src to dest
 * @dest: first string, has buffer
 * @src: second string, to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i, len;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return ((char *)dest);
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
	char *cpy_owner, *cpy_name;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	cpy_name = malloc(sizeof(char *) * name_len);
	if (cpy_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(cpy_name, name);
	new_dog->name = cpy_name;

	cpy_owner = malloc(sizeof(char *) * owner_len);
	if (cpy_owner == NULL)
	{
		free(cpy_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(cpy_owner, owner);
	new_dog->owner = cpy_owner;
	new_dog->age = age;

	return (new_dog);

}
