//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//AVL Tree node
class TreeNode {
    public:
    int data;
    TreeNode* right;
    TreeNode* left;
    int height;
};

// A utility function to get the height of the tree
int height(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    return root -> height;
}

// A utility function to get the max of the two number
int Max(int a, int b){
    return (a>b)? a:b;
}

// A helping Function to Create a Node with a given key and rigth and left as NULL
TreeNode* NewNode(int d){
    TreeNode* nn;
    nn->data = d;
    nn -> left = NULL;
    nn -> right = NULL;
    nn -> height = 1;
    return nn;
}

// A utility funtion to right rotate the subtree rotated with y
TreeNode* right_rotate(TreeNode* y){
    TreeNode* x = y -> left;
    TreeNode* t2 = x -> right;

    //perform rotation
    x -> right = y;
    y -> left = t2;

    //update height
    y -> height = Max( height(y -> left), height(y -> right)) + 1;
    x -> height = Max( height(x -> left), height(x -> right)) + 1;

    return x;
}

// A utility function to left rotate the subtree rotated with x
TreeNode* left_rotate(TreeNode* x){
    TreeNode* y = x -> right;
    TreeNode* t2 = y -> left;

    //perform rotation
    y -> left = x;
    x -> right = t2;

    //Update the height of the x 
    x -> height = Max( height(x -> left) , height(x -> right)) + 1;
    y -> height = Max( height(x -> right) , height(x -> left)) + 1;

    return y;
}

// A helping function to get the balancing factor of the node
int balancing_factor(TreeNode* n){
    if(n == NULL){
        return 0;
    }
    return height(n -> left) - height(n -> right);
}

int main(){

    return 0;
}