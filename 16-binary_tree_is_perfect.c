#include "binary_trees.h"

/**
 * get_depth - calculates depth
 * @tree: root node
 *
 * Return: depth
 */
int get_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (get_depth(tree->left) + 1 + get_depth(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binaty tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_h = get_depth(tree->left);
	right_h = get_depth(tree->right);
	if ((left_h - right_h) == 0)
		return (1);
	return (0);
}
