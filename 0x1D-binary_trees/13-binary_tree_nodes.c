#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	counter += binary_tree_nodes(tree->right);
	counter += binary_tree_nodes(tree->left);

	if (!tree->right && !tree->left)
		return (counter);

	return (counter + 1);
}
