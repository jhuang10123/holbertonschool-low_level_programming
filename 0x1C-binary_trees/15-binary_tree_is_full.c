#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to be measured
 * Return: 1 or 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        /* binary_tree_is_full(tree->left); */
        /* binary_tree_is_full(tree->right); */

        if (tree->left == NULL && tree->right != NULL)
                return (0);

        if (tree->left != NULL && tree->right == NULL)
                return (0);

        else
                if (tree->left == NULL && tree->right == NULL)
                        return (1);
        else
                return (binary_tree_is_full(tree->left)
                       +  binary_tree_is_full(tree->right));
}
