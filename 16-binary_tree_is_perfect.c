#include "binary_trees.h"

int _size(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - function that checks if a binary tree
 * @tree: pointer to the root node
 * Return: NULL OR 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);

	height = _size(tree);
	if (height & (height + 1))
		return (0);
	else
		return (1);
}

/**
 * _size - function for _size
 * @tree: tree
 * Return: NULL or 0
 */

int _size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (_size(tree->left) + _size(tree->right) + 1);
}
