#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_postorder - traverses a binary tree in postorder
 * @tree:root of binary tree
 * @func:function that fetches nodes
 * Return:void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
