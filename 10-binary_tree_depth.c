#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description:
 * This function calculates and returns the height (or depth) of the given
 * binary tree. The height is the length of the longest path from the root
 * node to a leaf node.
 *
 * Return: The depth of the binary tree. If the tree is empty (tree is NULL),
 * it returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL)
{
	return (0);
}
else
{
if (tree->parent)
{
depth = 1 + binary_tree_depth(tree->parent);

}

return (depth);
}
}
