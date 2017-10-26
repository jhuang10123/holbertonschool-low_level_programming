#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value of new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

		new->n = value;
		new->parent = parent;


	if (parent != NULL)
	{
		if (parent->right == NULL)
		{
			new->left = NULL;
			new->right = NULL;
			parent->right = new;

		}
		else
		{
			new->right = parent->right;
			parent->right = new;
			new->right->parent = new;
			new->left = NULL;
		}

	}
	return (new);
}

