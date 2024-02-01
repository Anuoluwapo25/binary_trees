#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node
 * Return: If tree is NULL, return 0
 */


size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}

