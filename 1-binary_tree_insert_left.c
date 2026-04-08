#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: parent node to insert the left-child in
 * @value: value stored in new node
 * Return:	new node
 *			NULL if fail or parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);
	left_child->n = value;
	left_child->parent = parent;
	left_child->left = NULL;
	left_child->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = left_child;
	}
	else
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
		parent->left = left_child;
	}

	return (left_child);
}
