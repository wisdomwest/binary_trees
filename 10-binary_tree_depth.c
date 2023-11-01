#include "binary_trees.h"

/**
  * binary_tree_depth - get depth of tree
  * @tree: pointer to a node
  * Return: depth or 0
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
