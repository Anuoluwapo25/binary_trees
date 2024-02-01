#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * @tree: pointer to root
 * Return: 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nd, right_nd;

	if (tree == NULL)
		return (0);

	left_nd = binary_tree_nodes(tree->left);
	right_nd = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + left_nd + right_nd);
	else
		return (left_nd + right_nd);
}
