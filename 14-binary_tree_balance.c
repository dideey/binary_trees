#include "binary_trees.h"
/**
 * binary_tree_balance - check for balnce factor
 * @tree:root node for the tree
 * Return: int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}

/**
* binary_tree_height- grts the height of a binary tree
* @tree:the root nodeof the tree
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftheight, rightheight;

if (tree)
{
leftheight = binary_tree_height(tree->left) + 1;
rightheight = binary_tree_height(tree->right) + 1;
return (leftheight > rightheight ? leftheight : rightheight);
}
return (-1);
}
