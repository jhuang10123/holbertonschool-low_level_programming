#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value of new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

/* initialize new  to NULL */
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

/* check if is root */
	if (parent != NULL)
	{
		if (parent->n > value)
			parent->left = new;

		else
			parent->right = new;
	}

	return (new);
}
