#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_leaf_depth - measures depth of leftmost leaf
 * @tree: pointer to node
 *
 * Return: depth (int)
 */
static int get_leaf_depth(const binary_tree_t *tree)
{
	int depth;

	depth = 0;
	while (tree->left || tree->right)
	{
		tree = tree->left;
		depth++;
	}
	return (depth);
}

/**
 * check_perfect - checks if all leaves are at same depth
 * @tree: pointer to node
 * @level: current level in tree
 * @depth: expected leaf depth
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int check_perfect(const binary_tree_t *tree,
		int level, int depth)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
	{
		if (level == depth)
			return (1);
		return (0);
	}

	if (!tree->left || !tree->right)
		return (0);

	return (check_perfect(tree->left, level + 1, depth) &&
			check_perfect(tree->right, level + 1, depth));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	depth = get_leaf_depth(tree);

	return (check_perfect(tree, 0, depth));
}
