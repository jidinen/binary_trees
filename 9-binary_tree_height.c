#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description:
 * This function calculates and returns the height (or depth) of the given
 * binary tree. The height is the length of the longest path from the root
 * node to a leaf node.
 *
 * Return: The height of the binary tree. If the tree is empty (tree is NULL),
 * it returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;
if (tree == NULL)
{
	return (0);
}
else
{
if (tree)
{
if (tree->left)
{
left_height = 1 + binary_tree_height(tree->left);
}
if (tree->right)
{
right_height = 1 + binary_tree_height(tree->right);
}
}
if (left_height > 1)
	return (left_height);
else
	return (right_height);
}
}
