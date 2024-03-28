#include "binary_trees.h"

/**
 * binary_trees_ancestors - finds the lowest common ancestors of two nodes
 * @first: pointres to first node
 * @second: pointer to second node
 *
 * Return: pointer to the lowst common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *f, *s;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	f = first->parent;
	s = second->parent;

	if (first == s || !s || (!first->parent && s))
		return (binary_trees_ancestor(first, s));
	if (second == f || !f || (!second->parent && f))
		return (binary_trees_ancestor(second, f));
	return (binary_trees_ancestor(f, s));
}
