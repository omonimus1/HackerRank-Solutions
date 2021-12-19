def insertNodeAtHead(llist, data):
    new_head = SinglyLinkedListNode(data);
    new_head.next = llist
    return new_head