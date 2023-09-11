#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftNode, rightNode, sum;

	if (tree == NULL)
		return (0);

	leftNode = binary_tree_size(tree->left);
	rightNode = binary_tree_size(tree->right);

	sum = leftNode + rightNode + 1;

	return (sum);
}
