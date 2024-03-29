#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description:
 * This function traverses a binary tree using post-order traversal,
 * starting from the given root node (tree), and applies the given
 * function (func) to each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
