DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode *node = new DoublyLinkedListNode(data);
    node->next = node->prev = NULL;
    DoublyLinkedListNode *head = llist;
    // Check il ll is empty;
    if(head == NULL)
    {
        return node;
    }
    // Check first node
    if(head->data > data)
    {
        node->next = head;
        return node; 
    }
    
    while(head->next != NULL && head->next->data <= data )
    {
        head = head->next;
    }
    // Check if we have reached the end; 
    if(head->next == NULL )
    {
        // We are at the last node, so we have to add now the new element at tail
        head->next = node;
        node->prev = head;
        node->next = NULL;
        return llist;
    }
    // We have to insert the new node between two existing node
    node->next = head->next;
    cout<<"cambio testa "<< head->data << ' ' <<node->data <<endl;
    head->next = node;
    node->prev = head;
    return llist;
}

