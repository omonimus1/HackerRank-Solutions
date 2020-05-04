def postOrder(root):
    if root == None:
        return
    else:
        postOrder(root.left)
        postOrder(root.right)
        print(root.info, end=' ')