#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0, if tree is NULL.
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	return ((left == right) &&
		binary_tree_height(tree->left) &&
		binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0, if tree is NULL.
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}
