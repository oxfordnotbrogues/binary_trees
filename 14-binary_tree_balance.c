#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int x = 0, y = 0, z = 0;

	if (tree)
	{
		x = ((int)binary_tree_height_b(tree->left));
		y = ((int)binary_tree_height_b(tree->right));
		z = y - x;
	}
	return (z);
}
