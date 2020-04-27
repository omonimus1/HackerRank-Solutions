void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *list_element = head;
    if(list_element == NULL)
        return; 
    while(list_element != NULL)
    {
        cout<<list_element->data<<endl;
        list_element = list_element->next;
    }
}