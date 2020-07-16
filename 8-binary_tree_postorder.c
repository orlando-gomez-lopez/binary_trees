#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - order tree left right root
 * @tree: node
 * @func: function to print
 * Return: print value of the node root left right
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL || func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
