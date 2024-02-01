#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node being created.
 * @value: The value to assign to the new node.
 *
 * Return: If memory allocation fails - returns NULL.
 *         Otherwise - returns a pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    /* Allocate memory for the new node */
    newNode = malloc(sizeof(binary_tree_t));
    if (newNode == NULL)
        return (NULL);

    /* Initialize the new node with the provided values */
    newNode->n = value;
    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;

    return (newNode);
}

