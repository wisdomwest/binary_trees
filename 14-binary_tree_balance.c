#include "binary_trees.h"

/**
  * binary_tree_height - get height of binary tree
  * @tree: pointer to a node
  * Return: height or 0
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}

/**
  * binary_tree_balance - measure balancing factor
  * @tree: pointer to root node
  * Return: factor or 0
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
