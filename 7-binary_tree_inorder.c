#include "binary_trees.h"

/**
 * binary_tree_inorder - print a tree in inorder
 *
 * @tree: - is a pointer to root of the tree
 * @func: - is a fucntion pointer to print the data inside each node
 * Return: NULL if tree or func are empty, else nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
