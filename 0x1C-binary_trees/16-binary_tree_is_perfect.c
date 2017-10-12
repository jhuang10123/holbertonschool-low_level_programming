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
 * isleaf - check if node is leaf
 * @node: node to be checked
 * Return: 1 if is leaf, else 0
 */
int isleaf(const binary_tree_t *node)
{

    if (node->parent != NULL && (node->right == NULL && node->left == NULL))
            return (1);

    return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to be measured
 * Return: 1 or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

    if (tree == NULL)
        return (0);

/* check if have 2 children */
    if (tree->left == NULL || tree->right == NULL)
        return (0);

    if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
    {
        return (1);
    }

    binary_tree_is_perfect(tree->left);
    binary_tree_is_perfect(tree->right);

    if (isleaf(tree->left) == 1 && isleaf(tree->right) == 1)
    {
        if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
            return (1);
    }
    return (0);

}
