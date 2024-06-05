#include "binary_trees.h"

/**
 * binary_tree_postorder - print a tree in postorder
 *
 * @tree: - is a pointer to root of the tree
 * @func: - is a fucntion pointer to print the data inside each node
 * Return: NULL if tree or func are empty, else nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
