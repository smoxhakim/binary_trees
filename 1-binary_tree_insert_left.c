#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree node at left
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
	{
		return (NULL);
	}

	binary_tree_t *newnode = binary_tree_node(parent, value);

	if (!newnode)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = newnode;
	}
	else
	{
		binary_tree_t *old_node = parent->left;

		parent->left = newnode;
		newnode->left = old_node;
		old_node->parent = newnode;
	}
	return (newnode);
}
