#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: A pointer to the parent node of the new node (or NULL for root).
 * @value: The integer value to be stored in the new node.
 *
 * Description:
 * This function creates a new binary tree node with the specified value and
 * attaches it as a child to the given parent node. If @parent is NULL, the
 * new node becomes the root of the binary tree.
 *
 * Return:
 * A pointer to the newly created binary tree node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return  (newNode);

}
