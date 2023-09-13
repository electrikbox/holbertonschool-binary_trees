#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft = 0;
	size_t heightRight = 0;

	if (!tree)
		return (0);

	heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightRight = tree->right ? 1 + binary_tree_height(tree->left) : 0;

	return (heightLeft > heightRight ? heightLeft : heightRight);
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

	heightLeft = tree->left ? (int)binary_tree_height(tree->left) : -1;
	heightRight = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (heightLeft - heightRight);
}
