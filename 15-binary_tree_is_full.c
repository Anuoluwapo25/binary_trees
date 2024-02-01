#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree 
 * @tree: pointer to root node
 * Return: NULL OR 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right == NULL) || (tree->left != NULL && tree->right != NULL))
		return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	else
		return (0);
}
