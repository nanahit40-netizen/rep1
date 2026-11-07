bool has_cycle(Node* startNode) {
    Node* walker=startNode;
    Node* runner=startNode;

    while(runner!=nullptr && runner->next!=nullptr) {
        walker=walker->next;
        runner=runner->next->next;

        if(walker==runner) {
            return true;
        }
    }

    return false;
}
