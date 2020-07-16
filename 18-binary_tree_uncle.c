#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - check if tree there are uncle
 * @node: node
 * Return: uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int current, left, right;
	char flag;
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	current = node->n;
	temp = node->parent;
	if (temp->right == NULL || temp->left == NULL)
		return (NULL);
	left = temp->left->n;
	right = temp->right->n;
	if (current == left)
		flag = 'r';
	if (current == right)
		flag = 'l';
	if (flag == 'r')
		if (temp->parent->right != NULL)
			return (temp->parent->left);
	if (flag == 'l')
		if (temp->parent->left != NULL)
			return (temp->parent->right);
	return (NULL);
}
