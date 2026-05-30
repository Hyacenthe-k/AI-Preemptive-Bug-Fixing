/**
 * add_node_end - Appends a new node with value n to the end of a linked list.
 * @head: Pointer to the head of the list (may be NULL for an empty list).
 * @n:    Integer value to store in the new node.
 *
 * Return: Pointer to the new node on success, NULL on malloc failure.
 */
list_t *add_node_end(list_t **head, const int n)
{
    list_t *new_node;
    list_t *current;

    /* FIX 2: Check malloc's return value before any use of the pointer. */
    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    /* FIX 3: Initialise fields unconditionally, before any branching. */
    new_node->n    = n;
    new_node->next = NULL;

    /* Handle the empty-list case via the double-pointer. */
    if (!*head)
    {
        *head = new_node;
        return (new_node);
    }

    /* FIX 1: Stop at the last node (current->next == NULL), not past it. */
    current = *head;
    while (current->next)
        current = current->next;

    /* Write into the struct member on the heap — not a local variable. */
    current->next = new_node;

    return (new_node);
}
