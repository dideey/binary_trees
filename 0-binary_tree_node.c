#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * parent: the parent node
 * value:the integer to be stored
 * return - pointer to newnode or null
 * 
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;
    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
        return (NULL);

    newnode-> n = value;
    newnode->parent = parent;
    newnode-> left = NULL;
    newnode-> right = NULL;
    return (newnode);

}
