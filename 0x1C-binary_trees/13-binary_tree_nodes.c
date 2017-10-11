#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
        size_t count;

        if (tree == NULL || (tree->left == NULL && tree->right == NULL))
                return (0);

        count = 1;
        count += binary_tree_nodes(tree->left);
        count += binary_tree_nodes(tree->right);
        return (count);

}
