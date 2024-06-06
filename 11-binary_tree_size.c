#include "binary_trees.h"

/**
 * binary_tree_size - measures the number of nodes in a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_tree = 0;
	size_t right_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		left_tree = binary_tree_size(tree->left);
		right_tree = binary_tree_size(tree->right);
	}

	return (left_tree + right_tree + 1);
}
