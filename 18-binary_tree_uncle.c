#include "binary_trees.h"

/**
 * binary_tree_uncle - Returns the uncle of a binary tree node
 *
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle of the given node, or NULL if the node is
 * NULL or it has no grandparent
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}

}
