#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: leaf count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

/* exit condition */
	if (tree == NULL)
		return (0);

/* leaf node = no left child and no right child */
	else
		if (tree->left == NULL && tree->right == NULL)
			return (1);

/* recursively count */
	return (binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right));

}
