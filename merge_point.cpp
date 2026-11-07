int findMergeNode(SinglyLinkedListNode* firstHead, SinglyLinkedListNode* secondHead) {
    SinglyLinkedListNode* fromFirst=firstHead;
    SinglyLinkedListNode* fromSecond=secondHead;

    while(fromFirst!=fromSecond) {
        if(fromFirst==nullptr) {
            fromFirst=secondHead;
        } else {
            fromFirst=fromFirst->next;
        }

        if(fromSecond==nullptr) {
            fromSecond=firstHead;
        } else {
            fromSecond=fromSecond->next;
        }
    }

    return fromFirst->data;
}
