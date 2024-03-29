#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a binary tree node is a leaf node.
 * @node: A pointer to the binary tree node to check.
 *
 * Description:
 * This function determines whether the provided binary tree node is a leaf
 * node by examining its left and right children. A leaf node has no children.
 *
 * Return:
 * 1 if the node is a leaf (no children), 0 otherwise. If the provided node
 * is NULL, it returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

if (node == NULL)
{
return (0);
}
if (node->left == NULL && node->right == NULL)
	return (1);
else
	return (0);
}
