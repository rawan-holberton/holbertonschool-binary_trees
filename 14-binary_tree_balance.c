#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that calculates the height
 * @tree: input tree
 * Return: return value
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (right > left)
		return (right);
	return (left);
}



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
