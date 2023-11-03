#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, c = 0, d = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		c = binary_tree_leaves(tree->left);
		d = binary_tree_leaves(tree->right);
		leaf = c + d;
		return ((!c && !d) ? leaf + 1 : leaf + 0);
	}
}
