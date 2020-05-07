//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
void reversePrint(SinglyLinkedListNode* head) {
    if(head == NULL)
        return;
    reversePrint(head->next);
    cout << head->data<<endl;
}