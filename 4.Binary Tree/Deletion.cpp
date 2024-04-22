//Kunal Sharma IIT JAMMu
#include <bits/stdc++.h>

using namespace std;

//Creating a class for the Tree Node
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

//Function to find the Min node in a BST
TreeNode* Min_Node(TreeNode* root){
    TreeNode* current = root;
    while(current -> left != nullptr){
        current = current -> left;
    }
    return current;
}

TreeNode* deleteNode(TreeNode* root, int key){
    if(root == nullptr){
        return root;
    }

    if(key < root -> data){
        root -> left = deleteNode(root -> left ,key);
    }

    else if(key > root -> data){
        root -> right = deleteNode(root -> right, key); 
    }

    else{
        if(root -> left == nullptr){
            TreeNode* temp = root -> right;
            delete root;
            return temp;
        }

        else if(root -> right == nullptr){
            TreeNode* temp = root -> left;
            delete root;
            return temp;
        }

        TreeNode* temp = Min_Node(root -> right);

        root -> data = temp -> data;

        root -> right = deleteNode(root -> right , temp -> data);
    }
    return root;
}

void Inorder(TreeNode* root){
    if(root == nullptr){
        return;
    }
    Inorder(root -> left);
    cout << root -> data << " ";
    Inorder(root -> right);
}

int main(){

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    cout << "Original BST : ";
    Inorder(root);
    
    cout << endl;
    deleteNode(root,4);

    cout << "BST after the Deletion : ";
    Inorder(root);

    return 0;
}