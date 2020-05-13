// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    // Case 1: Head is null
    if(head == NULL && position == 0)
    {
        // Create new node
        SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
        new_node ->next = NULL;
        head = new_node;
        return head;
    }
    else 
    {
        int counter = 0; 
        SinglyLinkedListNode *current = head;
        while(counter != position-1 && current != NULL)
        {
            counter++;
            current = current -> next;
        }
        if(current != NULL)
        {
            SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
            new_node->next = current ->next;
            current ->next = new_node;
            current = head;
            return current;
        }
        return head;
    }
}