#include "binary_trees.h"

/**
 * binary_tree_sibling - Returns the sibling of a binary tree node
 *
 * @node: Pointer to the node to find the sibling of
 *
 * Return: Pointer to the sibling of the given node, or NULL if the node is
 * NULL or it has no parent
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);

}
