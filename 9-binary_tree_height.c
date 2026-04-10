#include "binary_trees.h"

/**
 * binary_tree_height - measure height of tree
 * @tree: root node
 * Return:	height, 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_side, left_side;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_side = binary_tree_height(tree->left) + 1;
	right_side = binary_tree_height(tree->right) + 1;
	if (right_side > left_side)
	{
		return (right_side);
	}
	else
	{
		return (left_side);
	}
}
