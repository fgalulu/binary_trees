#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using inorder travesal.
 * and performs a func cal on each node.
 * @tree: pointer to root of tree.
 * @func: function call to perform.
 */
void binary_tree_inroder(const binary_tree_t *tree, void(*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}