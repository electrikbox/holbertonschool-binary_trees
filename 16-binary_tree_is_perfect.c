#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

/**
 * binary_tree_is_leaf - check of node is leaf
 * @node: pointer to the node to check
 * Return: 1 if node os leaf otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (node->right == NULL && node->left == NULL)
		return (1);

	else
		return (0);
	return (binary_tree_is_leaf(node->right));
}

/**
 * binary_tree_is_perfect - check if a binary is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 is the tree is perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return (0);
	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}
