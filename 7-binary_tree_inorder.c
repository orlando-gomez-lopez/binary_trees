#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - order tree left root right
 * @tree: node
 * @func: function to print
 * Return: print value of the node root left right
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL || func != NULL)
	{
		if (tree->left != NULL)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right != NULL)
			binary_tree_inorder(tree->right, func);
	}
}
