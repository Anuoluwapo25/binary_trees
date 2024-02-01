#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height a binary tre
 * @tree: pointer to the root node of the tree to traverse
 * Return: 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->left);

	return (1 + (left_h > right_h ? left_h : right_h));
}
