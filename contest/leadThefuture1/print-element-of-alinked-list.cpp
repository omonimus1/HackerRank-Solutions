// https://www.hackerrank.com/contests/ldf-round1/challenges/print-the-elements-of-a-linked-list/submissions/code/1327458873
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *current = head; 
    while(current != NULL)
    {
        cout << current->data <<endl;
        current = current->next; 
    }

}