#include "binary_trees.h"

/**
 * binary_tree_ancestor -  return a pointer to the LCA node
 * of the two given nodes
 * LCA is lower common ancestor
 * @first: first pointer
 * @second: second pointer
 * Return: NULL if not ancestor otherwise 0
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{

	if (first == NULL || second == NULL)
		return (NULL);

	const binary_tree_t *node1 = first;
	const binary_tree_t *node2 = second;

	while (node1 != node2)
	{
		if (node1->parent != NULL)
		node1 = node1->parent;

		else
			node1 = second;

		if (node2->parent != NULL)
		node2 = node2->parent;

		else
			node2 = first;

	}
	return ((binary_tree_t *)(node1));
}
