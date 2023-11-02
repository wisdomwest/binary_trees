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
  * binary_tree_size - get size of binary tree
  * @tree: pointer to root node
  * Return: size or 0
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}

/**
  * binary_tree_is_perfect - check if binary tree is perfect
  * @tree: pointer to root node
  * Return: 1 or 0
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
