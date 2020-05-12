//https://www.hackerrank.com/challenges/ctci-linked-list-cycle/
bool has_cycle(Node* head) {
    if(head == NULL && head->next == NULL)
        return false;
    else
    {
        Node *slow = head;
        Node *fast = head;
        while(slow && fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) 
                return true;
        }
        return false; 
    }
}