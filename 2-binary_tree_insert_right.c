#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_insert_right - adds node to right side
 * @parent:the node to be added to
 * @value:the int to be added
 * Return: null or pointer
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
return (NULL);

binary_tree_t *node;

node = binary_tree_node(parent, value);
if (node == NULL)
	return (NULL);
if (parent->right != NULL)
{
	node->right = parent->right;
	parent->right->parent = node;
}
	parent->right = node;
	return (node);
}
