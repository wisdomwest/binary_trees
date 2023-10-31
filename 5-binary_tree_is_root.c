#include "binary_trees.h"

/**
  * binary_tree_is_root - check node if root
  * @node: node
  * Return: 0 or 1
  */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
