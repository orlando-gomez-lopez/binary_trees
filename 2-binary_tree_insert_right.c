#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - Create a new node at the right of the parent
 * @parent: root
 * @value: value
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		new->right = NULL;
		new->left = NULL;
		new->parent = parent;
		new->n = value;
		parent->right = new;

	}
	else
	{
		temp = parent->right;
		new->left = NULL;
		new->n = value;
		new->parent = parent;
		parent->right = new;
		temp->parent = new;
		new->right = temp;
	}
	return (new);
}
