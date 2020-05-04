// https://www.hackerrank.com/challenges/tree-preorder-traversal/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign

void preOrder(Node *root) {
    if(root == NULL)
        return; 
    else
    {
        std::cout<< root->data<< " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}