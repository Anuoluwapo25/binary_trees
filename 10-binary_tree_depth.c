#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth a binary tre
 * @tree: pointer to the node to measure the depth
 * Return: 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_dp, right_dp;

	if (tree == NULL)
		return (0);

	left_dp = binary_tree_depth(tree->left);
	right_dp = binary_tree_depth(tree->right);

	return (1 + (left_dp > right_dp ? left_dp : right_dp));
}
