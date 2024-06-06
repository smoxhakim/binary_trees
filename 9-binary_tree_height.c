#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node
* Return: 0 if tree is NULL else the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (!tree)
        return 0; // Base case: tree is NULL

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return (left_height > right_height ? left_height : right_height);
}

