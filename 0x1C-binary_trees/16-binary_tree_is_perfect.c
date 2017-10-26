#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary \
 tree
 * @tree: pointer to the root node of the tree to be mea\
 sured
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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to be measured
 * Return: 1 or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

    binary_tree_t *left, *right;

    left = tree->left;
    right = tree->right;

    if (tree == NULL)
        return (0);

/* check if have 2 children */
    if (left == NULL || right == NULL)
        return (0);

    if (binary_tree_height(left) == binary_tree_height(right))
    {
        if (binary_tree_is_perfect(left) == binary_tree_is_perfect(right))
            return (1);
    }

    return (0);

}
