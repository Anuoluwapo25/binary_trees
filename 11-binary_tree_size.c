#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tr
 * @tree: pointer to the root node of the tree to measure
 * Return: 0 if NULL or size of binary
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return(1 + left_size + right_size);
}