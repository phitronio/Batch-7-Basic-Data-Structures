bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL)
        return false;
    if(root->data == x)
        return true;
    bool l = isNodePresent(root->left,x);
    bool r = isNodePresent(root->right,x);
    return (l || r);
}