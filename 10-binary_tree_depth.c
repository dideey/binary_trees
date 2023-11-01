#include "binary_trees.h"
/**
 * binary_tree_depth - gets binary tree depth
 * @tree:root node of tree
 * Return:0 or depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t ld, rd;
if (tree == NULL)
return (0);
ld = binary_tree_depth(tree->left);
rd = binary_tree_depth(tree->right);
return (1 + (ld > rd ? ld : rd));
}
