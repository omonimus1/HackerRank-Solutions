// https://www.hackerrank.com/challenges/tree-level-order-traversal/problem
void levelOrder(Node * root) {
    if(root == NULL)
        return; 
    // Apply breath first search

    queue<Node *>q;
    q.push(root);

    Node *temp;
    while(!q.empty())
    {
        temp = q.front();
        cout << temp->data <<" ";
        q.pop();
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }

}