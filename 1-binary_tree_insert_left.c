#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node as the left child
 * of a parent node
 * @parent: A pointer to the parent node to which the new node
 * will be attached.
 * @value: The integer value to be stored in the new node.
 *
 * Description:
 * This function inserts a new binary tree node with the specified value as the
 * left child of the given parent node. If the parent already has a left child,
 * the new node takes its place, and the previous left child becomes the left
 * child of the new node.
 *
 * Return:
 * A pointer to the newly created binary tree node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
if (parent == NULL)
{
return (NULL);
}

newNode =  binary_tree_node(parent, value);
if (parent->left != NULL)
{
newNode->left = parent->left;
parent->left->parent = newNode;
}
parent->left = newNode;
return (newNode);
}
