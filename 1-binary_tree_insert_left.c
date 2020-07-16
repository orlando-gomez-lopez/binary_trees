#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - Create a new node at the left of the parent
 * @parent: root
 * @value: value
 * Return: new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		new->right = NULL;
		new->left = NULL;
		new->parent = parent;
		new->n = value;
		parent->left = new;

	}
	else
	{
		temp = parent->left;
		new->right = NULL;
		new->n = value;
		new->parent = parent;
		parent->left = new;
		temp->parent = new;
		new->left = temp;
	}
	return (new);
}
