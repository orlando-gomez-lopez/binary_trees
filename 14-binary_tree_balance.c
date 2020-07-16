#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - index of balance in a tree
 * @tree: node
 * Return: value of balance or 0 is tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int size_left;
	int size_right;

	if (tree == NULL)
		return (0);
	size_left = height(tree->left);
	size_right = height(tree->right);

}

/**
 * height - height of a tree
 * @tree: node
 * Return: value of height or 0 is tree is NULL
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + max(height(tree->right), height(tree->left)));
}
