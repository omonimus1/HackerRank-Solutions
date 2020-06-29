// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(head == NULL)
        return head;

    SinglyLinkedListNode *current = head;

    // We have to remove the head of ll
    if(position == 0)
    {
        current = head->next;
        free(head);
        return current;
    }

    while(current != NULL && position > 1)
    {
        position--;
        current = current->next;
    }

    if(current == NULL) return head; 

    SinglyLinkedListNode *next = current->next->next;
    free(current->next);
    current->next = next; 
    return head;
}
