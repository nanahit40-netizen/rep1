bool has_cycle(Node* head) {
    if (head == NULL)
        return false;

    Node* a = head;
    Node* b = head;

    while (b != NULL && b->next != NULL) {
        a = a->next;
        b = b->next->next;
        if (a == b)
            return true;
    }

    return false;
}
