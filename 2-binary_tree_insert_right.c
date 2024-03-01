#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 *
 * @parent: Pointer to the node to insert the right child in
 * @value: Value to store in the new node
 *
 * Description:
 * This function inserts a new node with the given value as the right child of
 * the specified parent node. If the parent already has a right child, the new
 * node will take its place, and the old right child will become the right child
 * of the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure or if
 *         parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
