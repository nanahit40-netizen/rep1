DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* listHead, int value) {
    DoublyLinkedListNode* nodeToAdd = new DoublyLinkedListNode(value);

    if(listHead==nullptr || value<=listHead->data) {
        nodeToAdd->next=listHead;

        if(listHead!=nullptr) {
            listHead->prev=nodeToAdd;
        }

        return nodeToAdd;
    }

    DoublyLinkedListNode* scan=listHead;

    while(scan->next!=nullptr && scan->next->data<value) {
        scan=scan->next;
    }

    nodeToAdd->next=scan->next;
    nodeToAdd->prev=scan;

    if(scan->next!=nullptr) {
        scan->next->prev=nodeToAdd;
    }

    scan->next=nodeToAdd;

    return listHead;
}
