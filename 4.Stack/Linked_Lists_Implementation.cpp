//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//class for a node
class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

//push function to add element to the stack
void push(node* &top,int data){
    node* nn = new node(data);
    if(top == NULL){
        top = nn;
        return ;
    }
    nn -> next = top;
    top = nn;
}

//pop function to delete element from the top of the stack
void pop(node* &top){
    if(top == NULL){
        cout << "Stack is empty" << endl;
        return;
    }
    node* todelete = top;
    top= top -> next;
    todelete -> next = NULL;
    delete todelete;
}

//peek function to print the top element of the stack
void peek(node* &top){
    if(top == NULL){
        cout << "Stack is empty" <<endl;
        return; 
    }
    cout << top-> data << endl;
}

//empty function to check whether the stack is empty
bool empty(node* &top){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    node* top = NULL;
    push(top,1);
    push(top,2);
    push(top,3);
    peek(top);
    pop(top);
    //checking whether the stack is empty or not
    cout << empty(top) << endl;
    peek(top);
    pop(top);
    peek(top);
    pop(top);
    peek(top);
    pop(top);
    return 0;
}