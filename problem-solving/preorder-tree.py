# https://www.hackerrank.com/challenges/tree-preorder-traversal/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign
def preOrder(root):
    if root == None:
        return
    else:
        print(root.info, end = ' ')
        preOrder(root.left)
        preOrder(root.right)