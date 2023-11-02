#include "binary_trees.h"

/**
  * binary_tree_sibling - find sibling of a node
  * @node: pointer to a node
  * Return: pointer to sibling
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}

/**
  * binary_tree_uncle - find uncle of node
  * @node: node to find uncle
  * Return: null or pointer
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent))
}
