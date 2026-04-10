#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: node to check
 * Return:	1 if node is root
			0 if not or is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
