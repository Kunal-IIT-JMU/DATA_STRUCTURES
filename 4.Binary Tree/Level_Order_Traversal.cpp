//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//class for the Node of the Tree
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

void LevelOrder(TreeNode* root){
    //Ideal condition
    if(root == nullptr){
        return;
    }
    //Creating a queue to store the nodes
    queue <TreeNode*> q;
    q.push(root);

    while (!q.empty()){

        //get the first node in the queue
        TreeNode* current = q.front();
        q.pop();

        //print the data of the first queue
        cout << current -> data << " ";

        //adding the left node to queue
        if(current -> left != nullptr){
            q.push(current -> left);
        }

        //adding the right node to the queue
        if(current -> right != nullptr){
            q.push(current -> right);
        }
    }
}

int main(){

    TreeNode* root = new TreeNode(5);
    root -> left = new TreeNode(3);
    root -> right = new TreeNode(8);
    root -> left -> left = new TreeNode(2);
    root -> left -> right = new TreeNode(4);
    root -> right -> left = new TreeNode(7);
    root -> right -> right = new TreeNode(9);

    cout << "Level Order of The Binary Tree : "; 
    LevelOrder(root);

    return 0;
}