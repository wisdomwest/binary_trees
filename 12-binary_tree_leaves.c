#include "binary_trees.h"

/**
  * binary_tree_leaves - number of leaves
  * @tree: pointer to root node
  * Return: number or 0
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));
	}
	else
		return (0);
}
