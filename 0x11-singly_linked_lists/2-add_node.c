#include"lists.h"
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer head(used for modifying head)
 * @str: string in new node
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);

	new_node->str = new_str;
	new_node->len = _strlen(new_str);

	if (head != NULL)
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
