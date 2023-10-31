#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value of this node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *oldLeft;

	if (parent == NULL)
		return (node);
	node = binary_tree_node(parent, value);
	/* A problamtic sth that I've not been making the node like that */
	if (node == NULL)
		return (NULL);
	node->n = value;
	if (parent->left != NULL)
	{
		oldLeft = parent->left;
		node->left = oldLeft;
		oldLeft->parent = node;
		node->parent = parent;
	}
	/* We linked the old node and new node then does the*/
	/* mutual step after if condition */
	parent->left = node;
	return (node);
}
