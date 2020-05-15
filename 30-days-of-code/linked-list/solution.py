    def insert(self,head,data): 
        new_node = Node(data)
        new_node.next = None
        if head is None:
            return new_node
        original_head = head
        while head.next is not None:
            head = head.next
        head.next = new_node
        head = original_head
        return head