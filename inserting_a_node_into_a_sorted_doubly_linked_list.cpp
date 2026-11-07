DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode* t = new DoublyLinkedListNode(data);

    if (llist == NULL || data < llist->data) {
        t->next = llist;
        if (llist != NULL)
            llist->prev = t;
        return t;
    }

    DoublyLinkedListNode* p = llist;
    while (p->next != NULL && p->next->data < data) {
        p = p->next;
    }

    t->next = p->next;
    t->prev = p;
    p->next = t;

    if (t->next != NULL)
        t->next->prev = t;

    return llist;
}
