#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: integer stored in the node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (!parent)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		new_left_node->left = parent->left;
		(parent->left)->parent = new_left_node;
		parent->left = new_left_node;
		return (new_left_node);
	}
	else
	{
		parent->left = new_left_node;
		return (new_left_node);
	}
}
