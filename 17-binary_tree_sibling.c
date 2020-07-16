#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - check if tree there are siblings
 * @node: node
 * Return: sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int current, left, right;
	binary_tree_t *temp, *answer;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	current = node->n;
	temp = node->parent;
	if (temp->right == NULL || temp->left == NULL)
		return (NULL);
	left = temp->left->n;
	right = temp->right->n;
	if (current == left)
		answer = temp->right;
	if (current == right)
		answer = temp->left;
	return (answer);
}
