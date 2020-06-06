// https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/
int height(Node* root) {
    if(root == NULL)
        return -1;
    int l = height(root->left);
    int r = height(root->right);
            // Return the biggest counter
    return l > r ? l+1 : r+1; 
}