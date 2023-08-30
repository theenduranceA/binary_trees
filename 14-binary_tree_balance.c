#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Function that calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}


/**
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0, if tree is NULL.
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
