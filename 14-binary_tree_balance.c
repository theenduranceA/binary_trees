#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Function that calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
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
	if (tree == NULL)
		return (0);

	int left_balance = binary_tree_balance(tree->left);
	int right_balance = binary_tree_balance(tree->right);

	return (left_balance - right_balance);
}
