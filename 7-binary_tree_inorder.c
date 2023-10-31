#include "binary_trees.h"
/**
 * binary_tree_preorder - a function that goes through
 * a binary tree using pre-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 * Return: NULL
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;
	binary_tree_inorder(tree->left, func);
    func(tree->n);
	binary_tree_inorder(tree->right, func);
}
