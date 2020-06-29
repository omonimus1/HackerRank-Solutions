// https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem?h_r=next-challenge&h_v=zen
Node * insert(Node * root, int data) {
    Node *new_node = new Node(data);
    if(root == NULL)
        return new_node;
    if(root->data == data)
        return root;
    else if(root->data > new_node->data)
        root->left = insert(root->left, data);
    else 
        root->right = insert(root->right, data);

    return root;
}