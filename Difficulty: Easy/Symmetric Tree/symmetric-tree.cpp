/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool find(Node* l,Node* r)
    {
        if(l==NULL||r==NULL){
            return l==r;
        }
        if(l->data!=r->data){
            return false;
        }
        return find(l->left,r->right) && find(l->right,r->left);
    }
    bool isSymmetric(Node* root) {
        // Code here
        Node* l=root->left;
        Node* r=root->right;
        return find(l,r);
        
    }
};