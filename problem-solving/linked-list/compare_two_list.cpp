// https://www.hackerrank.com/challenges/compare-two-linked-lists/
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1 == NULL  && head2 == NULL)
        return true;
    else {
        while(head1 != NULL &&  head2 != NULL)
        {
            if(head1->data != head2->data)
                return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        if(head1 == NULL && head2 != NULL)
            return false;
        else if(head1 != NULL && head2 == NULL)
            return false;
            
        return true;
    }
}
