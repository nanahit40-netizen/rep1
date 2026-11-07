SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* t = new SinglyLinkedListNode(data);

    if (position == 0) {
        t->next = llist;
        return t;
    }

    SinglyLinkedListNode* p = llist;
    int x = 0;
    while (x < position - 1) {
        p = p->next;
        x++;
    }

    t->next = p->next;
    p->next = t;

    return llist;
}
