#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: A pointer to the root node of the binary tree to delete.
 *
 * Description:
 * This function recursively deletes the entire binary tree rooted at the given
 * node, ensuring that child nodes are deleted before their parent. It frees
 * the memory allocated for each node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}

binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
