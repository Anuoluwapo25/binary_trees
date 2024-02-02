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
	if (tree->left == NULL &&  tree->right == NULL)
		return (0);
	left_h = binary_tree_height(tree->left) + 1;
	right_h = binary_tree_height(tree->left) + 1;

	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
