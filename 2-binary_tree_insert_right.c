#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another
 *                            node in a binary tree.
 * @parent: A pointer to the node to insert the right child into.
 * @value: The value to store in the new node.
 *
 * Return: If the parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If the parent already has a right child, the new node
 *              takes its place, and the old right child becomes the right
 *              child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    /* Check if the parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Create a new node with the specified value */
    newNode = binary_tree_node(parent, value);
    if (newNode == NULL)
        return (NULL);

    /* If the parent already has a right child, adjust pointers */
    if (parent->right != NULL)
    {
        newNode->right = parent->right;
        parent->right->parent = newNode;
    }

    /* Set the new node as the right child of the parent */
    parent->right = newNode;

    return (newNode);
}

