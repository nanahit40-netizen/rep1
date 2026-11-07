SinglyLinkedListNode* insertNodeAtPosition(
    SinglyLinkedListNode* listHead,
    int value,
    int insertPos
) {
    SinglyLinkedListNode* nodeToAdd = new SinglyLinkedListNode(value);

    if(insertPos==0) {
        nodeToAdd->next=listHead;
        return nodeToAdd;
    }

    SinglyLinkedListNode* scan=listHead;

    for(int step=0;step<insertPos-1;step++) {
        scan=scan->next;
    }

    nodeToAdd->next=scan->next;
    scan->next=nodeToAdd;

    return listHead;
}
