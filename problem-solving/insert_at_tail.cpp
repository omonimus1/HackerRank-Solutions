//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head == NULL)
    {
        SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
        new_node ->next = NULL;
        head = new_node;
        return head;
    }
    else 
    {
        SinglyLinkedListNode *current = head;
        SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
        while(head->next !=NULL)
            head = head->next;
        head->next = new_node;
        new_node->next = NULL;
        head = current;
        return head;
    }
}