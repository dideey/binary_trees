#include "binary_trees.h"
/**
 * binary_tree_depth - gets binary tree depth
 * @tree:root node of tree
 * Return:0 or depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;

if (tree == NULL)
return (-1);

depth = binary_tree_depth(tree->parent);
return (depth + 1);
}
