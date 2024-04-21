//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Class for creating the Node of a binary Tree
struct TreeNode{
    int data;
    TreeNode* right;
    TreeNode* left;
    
    TreeNode(int d) : data(d),right(nullptr),left(nullptr){}
};

//Class for creating the Node of a binary tree
class BST {

    //private function for inserting the node
    private:
    TreeNode* root;
    TreeNode* insert(TreeNode* root,int val){
        if(root == nullptr){
            return new TreeNode(val);
        }
        if(val < root-> data){
            root -> left = insert(root-> left,val);
        }
        else if(val> root-> data){
            root-> right = insert(root->right,val);
        }
        return root;
    }

    //private function for inorder traversal of the node
    void inorder(TreeNode* root){
        if(root!= nullptr){
            inorder(root-> left);
            cout << root->data << " ";
            inorder(root -> right);
        }
    }

    //making public functions for exicution
    public:

    //constructor for the binary tree
    BST() : root(nullptr){}

    //binary tree insert function
    void Insert(int val){
        root = insert(root,val);
    }

    //binary tree inorder traversal
    void Inorder(){
        inorder(root);
    }
};

int main(){

    BST tree;
    tree.Insert(10);
    tree.Insert(6);
    tree.Insert(15);
    tree.Insert(8);
    tree.Insert(3);

    cout << "Inorder Traversal of the Binary Tree: ";
    tree.Inorder();
    cout << endl;

    return 0;
}