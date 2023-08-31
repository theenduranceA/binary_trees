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
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right &&
	binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right))

		return (1);

	return (0);
}

/**
 * binary_tree_height - Function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0, if tree is NULL.
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
