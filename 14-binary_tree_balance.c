#include "binary_trees.h"

/**
 * binaryTreeHeight - measure the height of binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
*/

size_t binaryTreeHeight(const binary_tree_t *tree)
{
	size_t heightLeft = 0;
	size_t heightRight = 0;

	if (!tree)
		return (0);

	heightLeft = binaryTreeHeight(tree->left);
	heightRight = binaryTreeHeight(tree->right);

	if (heightLeft >= heightRight)
		return (heightLeft + 1);

	return (heightRight + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL*
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int heightLeft, heightRight;

	if (!tree)
		return (0);

	heightLeft = binaryTreeHeight(tree->left);
	heightRight = binaryTreeHeight(tree->right);

	return (heightLeft - heightRight);
}
