#include "binary_trees.h"

/**
 * get_node_height - calculate height of a node in binary tree
 * @node: a pointer to the node
 *
 * Return: height of the node, 0 if node is NULL
 */
int get_node_height(const binary_tree_t *node)
{
	int left_h, right_h;

	if (node == NULL)
		return (0);

	left_h = get_node_height(node->left);
	right_h = get_node_height(node->right);

	return (left_h > right_h ? left_h + 1 : right_h + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (get_node_height(tree->left) - get_node_height(tree->right));
}
