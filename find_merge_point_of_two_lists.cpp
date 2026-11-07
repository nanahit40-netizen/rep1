int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* a = head1;
    SinglyLinkedListNode* b = head2;

    while (a != b) {
        if (a == NULL)
            a = head2;
        else
            a = a->next;

        if (b == NULL)
            b = head1;
        else
            b = b->next;
    }

    return a->data;
}
