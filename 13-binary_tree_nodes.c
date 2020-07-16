#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - amount of nodes with at least 1 child
 * @tree: node
 * Return: amount of nodes with child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		cont = 1;
		if (tree->left != NULL)
		{
			cont += binary_tree_nodes(tree->left);
		}
		if (tree->right != NULL)
		{
			cont += binary_tree_nodes(tree->right);
		}
	}
	return (cont);
}
