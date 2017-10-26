#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node to be checked
 * Return: 1 if node is a root, and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);

	if (node == NULL)
		return (0);
}
