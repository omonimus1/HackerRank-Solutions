def printLinkedList(head):
    if head == None:
        return;
    while(head != None):
        print(str(head.data))
        head = head.next