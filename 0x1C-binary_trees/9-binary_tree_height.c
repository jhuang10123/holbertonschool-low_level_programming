#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: tree height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

    size_t left, right;

/* account for leaf node */
    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
                return (0);

        left = right = 0;

        left = binary_tree_height(tree->left);
        right = binary_tree_height(tree->right);

        if (left > right)
                return (1 + left);
        else
                return (1 + right);


}

/* height = from root to leaf */
