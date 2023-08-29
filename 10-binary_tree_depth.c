#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - Function that measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0, if tree is NULL.
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
