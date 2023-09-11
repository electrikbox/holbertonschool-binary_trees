#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at the right side
 * @parent: pointer to the node to insert right child
 * @value: value to add the child node
 * Return: a pointer to the new child(right) node otherwise NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
	}
	parent->right = newNode;

	return (newNode);
}
