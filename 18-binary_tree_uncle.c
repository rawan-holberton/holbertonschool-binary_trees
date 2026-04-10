#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: node to find uncle
 * Return:	uncle, NULL if node is null or has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *together;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	together = node->parent;
	if (together->parent && together->parent->right != together)
		return (together->parent->right);
	if (together->parent && together->parent->left != together)
		return (together->parent->left);

	return (NULL);
}
