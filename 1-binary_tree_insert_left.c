#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - adds a node on the left child
 * parent: the node to be added upon
 * value: the value to be added
 * return: null or pointer to added node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    return(NULL);
    binary_tree_t *node;
    node = binary_tree_node(parent, value);
    if (node == NULL)
    return(NULL);
    if(parent != NULL)
    {
        node->left = parent->left;
    
    }
    parent->left = node;
    return(node);
}
