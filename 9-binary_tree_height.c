#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_height- grts the height of a binary tree
* @tree:the root nodeof the tree
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftheight, rightheight;

if (tree == NULL)
return (0);
leftheight = binary_tree_height(tree->left);
rightheight = binary_tree_height(tree->right);
return (leftheight > rightheight ? leftheight + 1 : rightheight + 1);
}
