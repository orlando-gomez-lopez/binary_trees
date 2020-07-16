#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - size of the tree
 * @tree: node
 * Return: the number of nodes of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
