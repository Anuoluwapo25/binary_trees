#include "binary_trees.h"
/*
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value of the new node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = parent->left;
	n_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = n_node;
	parent->left = n_node;

	return (n_node);
}
