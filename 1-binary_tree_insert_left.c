#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 *
 * @parent: Pointer to the node to insert the left child in
 * @value: Value to store in the new node
 *
 * Description:
 * This function inserts a new node with the given value as the left child of
 * the specified parent node. If the parent already has a left child, the new
 * node will take its place, and the old left child will become the left child
 * of the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure or if
 *         parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
