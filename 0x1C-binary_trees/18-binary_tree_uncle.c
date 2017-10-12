#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node of interest
 * Return: pointer to uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *grandpa;

    grandpa = node->parent->parent;

    if (node == NULL || node->parent == NULL || grandpa == NULL
        ||grandpa->left == NULL || grandpa->right == NULL)
        return (NULL);

    if (grandpa->right == node->parent)
        return (grandpa->left);
    else
        return (grandpa->right);
}
