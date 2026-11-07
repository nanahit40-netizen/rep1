DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* p = llist;
    DoublyLinkedListNode* last = NULL;

    while (p != NULL) {
        DoublyLinkedListNode* a = p->next;
        p->next = p->prev;
        p->prev = a;
        last = p;
        p = a;
    }

    if (last != NULL)
        return last;

    return llist;
}
