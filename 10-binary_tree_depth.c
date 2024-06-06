#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the depth
 *
 * Return: The depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}