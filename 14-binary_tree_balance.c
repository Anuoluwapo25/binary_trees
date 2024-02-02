#include "binary_trees.h"
int binary_tree_height_node(const binary_tree_t *node);
/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	balance = left_h - right_h;
	return (balance);
}

/**
 * binary_tree_height - function that measures
 * @node: pointer to node
 * Return: return the height
 */
int binary_tree_height_node(const binary_tree_t *node)
{
	int left_height = 0, right_height = 0, height = 0;

	if (node == NULL)
		return(-1);

	left_height += binary_tree_height_node(node->left);
	right_height += binary_tree_height_node(node->right);

	if (left_height > right_height)
		height = left_height + 1;
	else
		height = right_height + 1;

	return (height);
}
