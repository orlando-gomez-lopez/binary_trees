#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - height of the tree
 * @tree: node
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		cont++;
		binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		cont++;
		binary_tree_height(tree->right);
	}
	return (cont);
}
