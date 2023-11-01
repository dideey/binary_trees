#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_preorder - traverses the tree in preorder
 * @tree:the root node
 * @func:function to call nodes
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
