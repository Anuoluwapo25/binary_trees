#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary
 * @tree: pointer to root node of tree
 * Return: 0 if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_lv, right_lv;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_lv = binary_tree_leaves(tree->left);
	right_lv = binary_tree_leaves(tree->right);


	return (left_lv + right_lv);
}
