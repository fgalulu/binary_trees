#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: input value
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *b_t = NULL;

	b_t = calloc(1, sizeof(binary_tree_t));
	if (!b_t)
		return (NULL);
	b_t->parent = parent;
	b_t->n = value;
	return (b_t);
}
