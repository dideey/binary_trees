#include "binary_trees.h"
#include <stddef.h>

/**
* binary_tree_insert_left - adds a node on the left child
* @parent: the node to be added upon
* @value: the value to be added
* Return: null or pointer to added node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (parent == NULL)
return (NULL);



node = binary_tree_node(parent, value);
if (node == NULL)
return (NULL);
if (parent->left != NULL)
{
node->left = parent->left;
parent->left->parent = node;
}
parent->left = node;
return (node);
}
