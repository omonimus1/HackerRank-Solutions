Node* insert(Node *head,int data)
{
    if(head ==NULL)
    {
        Node *current = new Node(data);
        return current;
    }
    // Reach the end of the Linked list
    Node *starting_point = head;
    while(head->next != NULL)
        head = head->next;
    // Create new Node
    Node *new_node = new Node(data);
    head ->next = new_node;
    new_node ->next = NULL;
    head = starting_point;
    return head; 
}