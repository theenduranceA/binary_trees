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
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) &&
		binary_tree_is_perfect(tree->left) == binary_tree_is_perfect(tree->right));
}
