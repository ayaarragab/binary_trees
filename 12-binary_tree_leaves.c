#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: tree to check
 * Return: counts the leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lf = 0, l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	lf = l + r;

	return ((!l && !r) ? lf + 1 : lf + 0);
}
