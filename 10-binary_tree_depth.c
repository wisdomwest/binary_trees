#include "binary_trees.h"

/**
  * binary_tree_depth - get depth of tree
  * @tree: pointer to a node
  * Return: depth or 0
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree || tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
