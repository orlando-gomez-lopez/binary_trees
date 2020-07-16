#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - order tree root left right
 * @tree: node
 * @func: function to print
 * Return: print value of the node root left right
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL || func != NULL)
	{
		func(tree->n);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
