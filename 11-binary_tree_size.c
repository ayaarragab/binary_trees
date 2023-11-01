#include "binary_trees.h"
/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0, l = 0, r = 0;

	if (!tree)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	s = l + r + 1;

	return (s);
}
