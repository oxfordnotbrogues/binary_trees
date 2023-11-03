#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node at the right of the parent node
 * @parent: the root node
 * @value: the value to be added to the newnode
 * Return: the newnode or null ifnit fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;
	return (newnode);
}
