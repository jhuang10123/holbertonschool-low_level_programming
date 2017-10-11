#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: 1 or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
        size_t left, right;

        left=right=1;

        if (tree == NULL)
                return (-1);

        left += binary_tree_balance(tree->left);
        right += binary_tree_balance(tree->right);

        return (left - right);
}

/*
*** Error in `./14-balance': free(): invalid next size (normal):
0x0000000000a791f0 ***
Aborted (core dumped)
 */
