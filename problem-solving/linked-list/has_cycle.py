def has_cycle(head):
    if head is None and head.next is None:
        return False
    slow = head.next
    fast = head.next.next
    while(slow and fast and fast.next):
        if(slow == fast):
            break
        slow = slow.next
        fast = fast.next.next
    if slow == fast:
        return True
    return False
