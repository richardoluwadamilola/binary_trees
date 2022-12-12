#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that
 * checks if a node is the root
 * @node: node
 * Return: return if node is root - 1
 * otherwise - 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
