//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

class TreeNode{
    public:
    int data ;
    TreeNode* left ;
    TreeNode* right ;
    int height; 
};

int height (TreeNode* root){
    if(root == NULL){
        return 0;
    }
    return root -> height;
}

int max(int a , int b){
    return a>b? a:b;
}

TreeNode* NewNode(int d){
    TreeNode* nn = new TreeNode();
    nn -> data = d;
    nn -> left = nullptr;
    nn -> right = nullptr;
    return nn;
}

int bal_fac(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int ans = height(root -> left) - height(root -> right);
    return ans;
}

TreeNode* r_rotate(TreeNode* root){
    TreeNode* x = root -> left;
    TreeNode* t2 = x -> right;

    //performing the r_rotate
    x -> right = root;
    root -> left = t2;

    //updating the height
    root -> height = 1 + max(height(root -> left), height(root -> right));
    x -> height = 1 + max(height(x -> left) , height(x -> right));

    return root;
}

TreeNode* l_rotate(TreeNode* root){
    TreeNode* x = root -> right;
    TreeNode* t2 = x -> left;

    //performing the rotation
    x -> left = root;
    root -> right = t2;

    //updating the height 
    root -> height = 1 + max(height(root -> left),height(root -> right));
    x -> height = 1 + max(height(x -> left),height(x -> right));

    return root;
}

TreeNode* Insert(TreeNode* root,int data){
    if(root == NULL){
        return NewNode(data);
    }

    if(data < root -> data){
        root -> left = Insert(root -> left , data);
    }

    else if(data > root -> data){
        root -> right = Insert(root -> right, data);
    }

    else{
        return root;
    }

    root -> height = 1 + max(height(root ->  left), height(root -> right));

    int bf = bal_fac(root);

    //ll case
    if(bf > 1 && root -> left -> data > data){
        return r_rotate(root);
    }

    //rr case
    if( bf < -1 && root -> right -> data < data){
        return l_rotate(root);
    }

    //lr case
    if( bf > 1 && root -> left -> data < data){
        root -> left = l_rotate(root -> left);
        return r_rotate(root);
    }

    //rl case
    if(bf < -1 && data < root -> right -> data ){
        root -> right = r_rotate(root -> right);
        return l_rotate(root);
    }

    return root;
}

void inorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    cout << root -> data << endl;
    inorder(root -> right);
}

int main(){
    TreeNode* root = NULL;

    root = Insert(root, 10); 
	root = Insert(root, 20); 
	root = Insert(root, 30); 
	root = Insert(root, 40); 

    inorder(root);
    return 0;
}