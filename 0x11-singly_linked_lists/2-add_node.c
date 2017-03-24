#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns length of a string
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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to first element
 * @str: pointer to string in new node
 * Return: NULL or address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	if (head != NULL)
		new->next = *head;

	*head = new;

	return (new);
}
