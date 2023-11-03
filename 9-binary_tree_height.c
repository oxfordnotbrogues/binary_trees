#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t k = 0;
	size_t j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			j = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			k = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((j > k) ? k : j);
	}
}
