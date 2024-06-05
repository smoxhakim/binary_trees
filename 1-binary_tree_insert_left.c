#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a newnode binary tree node at left
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the newnode node
 * Return: a pointer to the newnode node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = parent->left;
	parent->left = newnode;
	if (newnode->left)
	{
		newnode->left->parent = newnode;
	}
	return (newnode);
}
