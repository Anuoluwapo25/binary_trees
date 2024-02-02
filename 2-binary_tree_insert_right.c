#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Parent node
 * @value: Value of the new node
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;
       
	if (n_node == NULL)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = n_node;
	}
	parent->right = n_node;

	return (n_node);
}

