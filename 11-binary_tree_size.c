#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 * Return: 0, if tree is NULL.
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}
