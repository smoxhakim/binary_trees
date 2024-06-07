#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the number of nodes in a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: The number of nodes in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree)
	{
		node_count = (tree->left || tree->right) ? 1 : 0;
		node_count += binary_tree_nodes(tree->left);
		node_count += binary_tree_nodes(tree->right);
	}

	return (node_count);
}
