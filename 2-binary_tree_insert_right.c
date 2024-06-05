#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a newnode binary tree node at right
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the newnode node
 * Return: a pointer to the newnode node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *old_node;

	if (!parent)
	{
		return (NULL);
	}

	newnode = binary_tree_node(parent, value);
	if (!newnode)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = newnode;
	}
	else
	{
		old_node = parent->right;
		newnode->right = old_node;
		parent->right = newnode;
		old_node->parent = newnode;
	}
	return (newnode);

}
