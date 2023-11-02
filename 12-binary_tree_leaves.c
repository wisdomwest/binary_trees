#include "binary_trees.h"

/**
  * binary_tree_is_leaf - checks if node is leaf
  * @node: pointer to node
  * Return: 0 or 1
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

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
