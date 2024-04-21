//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//class for the tree node
class TreeNode{
    public:
    int data;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int d){
        this -> data = d;
        this -> right = nullptr;
        this -> left = nullptr;
    }
};

//class for creating the tree
class BST{
    private:
    TreeNode* root ;

    //private function for the Inserting the Node in the tree
    TreeNode* insert(TreeNode* root, int val){
        if(root == nullptr){
            return new TreeNode(val);
        }
        if(val < root -> data){
            root -> left = insert(root -> left,val);
        }
        else if(val > root -> data){
            root -> right = insert(root -> right, val);
        }
        return root;
    }

    //private function for the inorder traversel of the Tree
    void inorder(TreeNode* root){
        if(root != nullptr){
            inorder(root-> left);
            cout << root -> data << " ";
            inorder(root -> right);
        }
    }

    //private function for the preorder traversal of the Tree
    void preorder(TreeNode* root){
        if(root != nullptr){
            cout << root -> data << " ";
            preorder(root-> left);
            preorder(root -> right);
        }
    }
    
    //private function for the postorder traversel of the tree
    void postorder(TreeNode* root){
        if(root!= nullptr){
            postorder(root -> left);
            postorder(root -> right);
            cout << root -> data << " ";
        }
    }

    public:
    //constructor
    BST() : root(nullptr) {}

    //public insert function
    void Insert(int val){
        root = insert(root,val);
    }

    //public inorder traversal
    void Inorder(){
        inorder(root);
    }

    //public preorder traversal
    void Preorder(){
        preorder(root);
    }

    //public postorder traversal
    void Postorder(){
        postorder(root);
    }
};

int main(){
    BST tree;
    //inserting nodes in the tree
    tree.Insert(10);
    tree.Insert(8);
    tree.Insert(5);
    tree.Insert(2);
    tree.Insert(12);
    tree.Insert(15);

    //inorder traversal of the tree
    cout << "Inorder T raversal of the tree" << endl;
    tree.Inorder();
    cout << endl;

    //preorder traversal of the tree
    cout << "Preorder Traversal of the tree" << endl;
    tree.Preorder();
    cout << endl;

    //postorder traversal of the tree
    cout << "Postorder Traversal of the tree" << endl;
    tree.Postorder();
    cout << endl;

    return 0;
}