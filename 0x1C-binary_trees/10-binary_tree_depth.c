#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the root node of the tree to be measured
 * Return: tree depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL || node->parent == NULL)
		return (0);

	depth = 1;
	depth += binary_tree_depth(node->parent);

	return (depth);
}

/* depth = counting from node up to root */
