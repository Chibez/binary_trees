#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: A pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /* Declaration of the new node with its data type */
    binary_tree_t *newNode;

    /* Allocate memory space for the new node */
    newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    /* Check if memory allocation was successful */
    if (newNode == NULL)
    {
        return (NULL); /* Return NULL if memory allocation failed */
    }

    /* Assign values to the properties of the node */
    newNode->parent = parent; /* Set the parent pointer */
    newNode->n = value; /* Set the value of the node */
    newNode->left = NULL; /* Set the left child pointer to NULL */
    newNode->right = NULL; /* Set the right child pointer to NULL */

    /* Return a pointer to the newly created node */
    return (newNode);
}
