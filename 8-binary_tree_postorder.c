#include "binary_trees.h"
/**
 * binary_tree_postorder - Perform an postorder traversal of a binary tree and
 *                      apply a function to each node.
 *
 * @tree: A pointer to the root of the binary tree to be traversed.
 * @func: A pointer to a function that takes an integer value as an argument
 *        and performs an operation on it.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

/* checking for NULL values*/
if (tree == NULL || func == NULL)
	return;

/* calling the subtrees recursively till child node is null*/
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
