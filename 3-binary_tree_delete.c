#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a tree
 *
 * @tree: - is a pointer to the parent node of the node to delete
 * Return: None
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
