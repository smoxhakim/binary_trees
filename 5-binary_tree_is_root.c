#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 *
 * @node: - is a pointer to the node we seek to check
 * Return: return 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
