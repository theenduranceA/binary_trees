#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Function that counts the nodes with at least
 * 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0, if tree is NULL.
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		nodes = 1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);
		return (nodes);
	}
	return (0);
}
