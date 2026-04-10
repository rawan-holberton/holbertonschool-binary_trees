#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of a node
 * @tree: node to measure the depth
 * Return:	depth, 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	for (depth = 0; tree && tree->parent; depth++)
		tree = tree->parent;
	return (depth);
}
