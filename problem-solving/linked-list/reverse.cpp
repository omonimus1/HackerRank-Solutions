// https://www.hackerrank.com/challenges/reverse-a-linked-list/
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if(head == NULL)
        return head; 
    SinglyLinkedListNode *current, *next =NULL, *prev=NULL;
    current = head;
    while(current != NULL)
    {
        next = current ->next;
        // Reverse current nodes' next pointer
        current ->next = prev;
        // Move pointer forward in the linked list
        prev = current;
        current = next; 
    }
    head = prev;
    return head; 
}
