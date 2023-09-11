#include "binary_trees.h"

/**
 * binary_tree_node - add binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: return a pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newTreeNode = NULL;

	newTreeNode = malloc(sizeof(binary_tree_t));
	if(!newTreeNode)
		return (NULL);

	newTreeNode->parent = parent;
	newTreeNode->left = NULL;
	newTreeNode->right = NULL;
	newTreeNode->n = value;
	free(newTreeNode);

	return (newTreeNode);
}
