#include "binary_trees.h"

/**
 * binary_tree_depth - check the depth of binary tree
 * @tree: pointer to root node of free to be traversed
 * Return: depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
