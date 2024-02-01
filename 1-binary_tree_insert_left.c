#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another
 *                           node in a binary tree.
 * @parent: A pointer to the node to insert the left child into.
 * @value: The value to store in the new node.
 *
 * Return: If the parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If the parent already has a left child, the new node
 *              takes its place, and the old left child becomes the left
 *              child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    /* Check if the parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Create a new node with the specified value */
    newNode = binary_tree_node(parent, value);
    if (newNode == NULL)
        return (NULL);

    /* If the parent already has a left child, adjust pointers */
    if (parent->left != NULL)
    {
        newNode->left = parent->left;
        parent->left->parent = newNode;
    }

    /* Set the new node as the left child of the parent */
    parent->left = newNode;

    return (newNode);
}

