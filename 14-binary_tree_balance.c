#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The balance factor of the binary tree
 *         -1 if the tree is leaning to the left
 *          0 if the tree is balanced
 *          1 if the tree is leaning to the right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_count = 0;
	int right_count = 0;

	if (!tree)
		return (0);

	left_count = (int)binary_tree_height(tree->left);
	right_count = (int)binary_tree_height(tree->right);

	return (left_count - right_count);
}