DoublyLinkedListNode* reverse(DoublyLinkedListNode* headPtr) {
    DoublyLinkedListNode* nodePtr=headPtr;
    DoublyLinkedListNode* swapHolder=nullptr;

    while(nodePtr!=nullptr) {
        swapHolder=nodePtr->prev;
        nodePtr->prev=nodePtr->next;
        nodePtr->next=swapHolder;

        nodePtr=nodePtr->prev;
    }

    if(swapHolder!=nullptr) {
        headPtr=swapHolder->prev;
    }

    return headPtr;
}
