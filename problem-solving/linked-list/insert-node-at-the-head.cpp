// https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
   SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    new_node -> data = data;
    new_node->next = (llist);
    llist = new_node;
    return llist;
}