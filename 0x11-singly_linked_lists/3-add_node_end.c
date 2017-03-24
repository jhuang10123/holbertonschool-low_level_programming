#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - finds length of string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * add_node_end - adds new node to end og list
 * @head: pointer to list
 * @str: pointer to string
 * Return: NULL or address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new;
	list_t *n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	return (new);


}
