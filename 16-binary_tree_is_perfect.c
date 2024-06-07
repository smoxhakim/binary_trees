#include "binary_trees.h"

/**
 * calculate_depth - This function calculates the depth
 * of the leftmost path in the binary tree
 *
 * @node: Pointer to the root node of the tree
 *
 * Return: the depth
 */


size_t calculate_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node != NULL)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}

/**
 * is_perfect - This function checks
 * if the binary tree rooted at node is perfect
 *
 * @node: Pointer to the root node of the tree
 * @depth: the depth
 * @level: the level
 *
 * Return: the depth
 */

int is_perfect(const binary_tree_t *node, size_t depth, size_t level)
{
	int left_is_perfect = 0;
	int right_is_perfect = 0;

	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
		return (depth == level + 1);

	if (node->left == NULL || node->right == NULL)
		return (0);

	left_is_perfect = is_perfect(node->left, depth, level + 1);
	right_is_perfect = is_perfect(node->right, depth, level + 1);

	return (left_is_perfect && right_is_perfect);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = calculate_depth(tree);

	if (tree == NULL)
		return (0);

	return (is_perfect(tree, depth, 0));
}
