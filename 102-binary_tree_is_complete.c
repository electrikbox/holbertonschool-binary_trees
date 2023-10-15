#include "binary_trees.h"

/**
 * is_complete_recursive - Recursive helper function to check completeness.
 * @tree: A pointer to the current node in the tree.
 * @index: The current index of the node (starting from 0 for the root).
 * @node_count: The total number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int is_complete_recursive(const binary_tree_t *tree, int index, int node_count)
{
	if (tree == NULL)
		return (1);

	if (index >= node_count)
		return (0);

	return (is_complete_recursive(tree->left, 2 * index + 1, node_count) &&
		is_complete_recursive(tree->right, 2 * index + 2, node_count));
}

/**
 * binary_tree_size_complete - Compute the number of nodes in a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The number of nodes in the tree.
 */
int binary_tree_size_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size_complete(tree->left)
		+ binary_tree_size_complete(tree->right));
}

/**
 * binary_tree_is_complete - Check if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_complete_recursive(tree, 0, binary_tree_size_complete(tree)));
}
