#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full = 0;
	int right_is_full = 0;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}

	if (!tree->left || !tree->right)
	{
		return (0);
	}

	left_is_full = binary_tree_is_full(tree->left);
	right_is_full = binary_tree_is_full(tree->right);

	return (left_is_full && right_is_full);
}
