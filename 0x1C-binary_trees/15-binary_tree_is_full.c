#include "binary_trees.h"
/**
 * isleaf - check if node is leaf
 * @node: node to be checked
 * Return: 1 if is leaf, else 0
 */
int isleaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (1);
	if (node->right == NULL && node->left == NULL)
		return (1);
	if (node->right != NULL && node->left != NULL)
		return(isleaf(node->right) &&
			isleaf(node->left));

	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to be measured
 * Return: 1 if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (isleaf(tree) == 1)
		return (1);

	left = right = 0;

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 0 || right == 0)
		return (0);

	else
		return (1);

}
