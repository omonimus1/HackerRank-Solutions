// https://www.hackerrank.com/challenges/tree-inorder-traversal/problem
void inOrder(Node *root) {
    if(root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}