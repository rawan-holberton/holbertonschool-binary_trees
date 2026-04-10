#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);
	left_tree = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_tree = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left_tree - right_tree);
}
