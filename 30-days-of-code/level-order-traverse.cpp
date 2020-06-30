// https://www.hackerrank.com/challenges/30-binary-trees/problem

void levelOrder(Node * root){
    if(root == NULL)
        return;

    // Apply Breath First search for level traverse
    queue<Node *>q;
    q.push(root);

    Node *node; 
    while(!q.empty())
    {
        node = q.front();
        cout << node->data << " ";
        q.pop();

        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
    }
}
