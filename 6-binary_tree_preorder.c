#include "binary_trees.h"

/**
 * binary_tree_preorder - print a tree in preorder
 *
 * @tree: - is a pointer to root of the tree
 * @func: - is a fucntion pointer to print the data inside each node
 * Return: NULL if tree or func are empty, else nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
