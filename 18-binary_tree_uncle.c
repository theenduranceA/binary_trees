#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (
		(node && node->parent && node->parent->parent) ?
		(node->parent->parent->left == node->parent ?
		 node->parent->parent->right :
		 node->parent->parent->left) :
		NULL
	);
}
