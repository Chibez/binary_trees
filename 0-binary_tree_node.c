#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /* declaration of the new node with its data type */
    binary_tree_t *currentNode;

    /* allocate memory space for that node */
    currentNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (currentNode == NULL)
    {
        return (NULL);
    }

    /* assign values to the properties of the node */
    currentNode->parent = parent;
    currentNode->n = value;
    currentNode->left = NULL;
    currentNode->right = NULL;

    /* return a pointer to the node */
    return (currentNode);
}
