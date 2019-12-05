#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;
	binary_tree_t *left_node = tree->left;
	binary_tree_t *right_node = tree->right;

	if (!tree)
		return (0);

	while (left_node)
	{
		counter += 1;
		left_node = left_node->left;
	}

	while (right_node)
	{
		counter += 1;
		right_node = right_node->right;
	}

	return (counter);
}
