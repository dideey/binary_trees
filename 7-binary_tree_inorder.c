#include "binary_trees.h"
#include <stdlib.h>
/**
*binary_tree_inorder - traverses a tree inorder
*@tree: binary tree to be traversed
*@func: function that calls nodes
*Return:void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
