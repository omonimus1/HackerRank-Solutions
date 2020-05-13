// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign
bool has_cycle(SinglyLinkedListNode* head) {
    // If the list is emty there are no loop
    if(head == NULL && head->next != head)
        return false;
    else
    {
        SinglyLinkedListNode *slow = head;
        SinglyLinkedListNode *fast = head;
        
        while(slow && fast && fast->next!= NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;
        }
        if(slow == fast)
            return true;
        else
            return false;
    }
}
