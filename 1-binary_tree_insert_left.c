#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *oldLeft, *newNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL || newNode == NULL)
		return (NULL);

	oldLeft = parent->left;

	parent->left = newNode;
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = oldLeft;
	newNode->right = NULL;

	if (oldLeft != NULL)
		oldLeft->parent = newNode;

	return (newNode);
}