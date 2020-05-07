//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    // Check if the linked list is empty
    if(head == NULL)
        return -1;
    int number_of_nodes = get_number_of_nodes(head);
    int position = number_of_nodes-positionFromTail;
    int counter = 0;
    while(head != NULL)
    {
        counter++;
        if(position == counter)
        {
            return head->data;
        }
        head = head->next;
    }
    // Something went wrong
    return -1;
}