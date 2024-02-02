#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree
 * @tree: pointer to the root node
 * Return: NULL OR 0
 */

size_t binary_tree_height(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	return (binary_tree_is_perfect_recursive(tree, height, 0));
}

/**
 * binary_tree_is_perfect_recursive - function for rcursion
 * @tree: tree
 * @height: height
 * @level: level
 * Return: NULL or 0
 */

int binary_tree_is_perfect_recursive(const binary_tree_t *tree, int height, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (level == height - 1);

	return ((binary_tree_is_perfect_recursive(tree->left, height, level + 1) && binary_tree_is_perfect_recursive(tree->right, height, level + 1)));
}
