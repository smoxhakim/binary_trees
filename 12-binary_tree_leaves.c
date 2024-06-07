#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the number of leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (tree)
	{
		leaf_count += (!tree->left && !tree->right) ? 1 : 0;
		leaf_count += binary_tree_leaves(tree->left);
		leaf_count += binary_tree_leaves(tree->right);
	}
	return (leaf_count);

}
