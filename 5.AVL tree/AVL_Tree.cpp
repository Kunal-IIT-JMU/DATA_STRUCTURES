
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

//Recursive function to insert a key ina subtree rooted with node and returns the new root of the subtree
TreeNode* insert(TreeNode* root, int key){
    /* perform normal BST Inversion */
    if(root == nullptr){
        return NewNode(key);
    }

    else if(key > root -> data){
        root -> right = insert(root -> right , key);
    }

    else if(key < root -> data){
        root -> left = insert(root -> left , key);
    }

    else 
        return root;

    /* Updating the Height of this ancester node */
    root -> height = 1 + Max (height(root -> left), height(root -> right));

    /* Check the balancing facter to check whether the node is balanced or not */
    int bal_fac = balancing_factor(root);

    /* If the root becomes unbalanced */
    /* There are 4 Cases */

    // CASE 1 : Left Left Case
    if(bal_fac > 1 && key < root -> left -> data){
        return right_rotate(root);
    }

    //CASE 2 : Right Right Case
    if(bal_fac < -1 && key > root -> right -> data){
        return left_rotate(root);
    }

    //CASE 3 : Left Right Case
    if(bal_fac > 1 && key > root -> right -> data){
        root -> left = left_rotate(root -> left);
        return right_rotate(root);
    }

    //CASE 4 : Right Left Case
    if(bal_fac < -1 && key < root -> left -> data){
        root -> right = right_rotate(root -> right);
        return left_rotate(root);
    }

    /* Return the Unchanged NULL Pointer */
    return root;
}

/* A Utility function to print the BST in Preorder Traversal */
void Preorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    Preorder(root -> left);
    Preorder(root -> right);
}

int main(){

    /* Creating the Tree by inserting the Nodes */
    TreeNode* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);

    /* Printing the Tree in Preorder Traversal */
    Preorder(root);

    return 0;
}