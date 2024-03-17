//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Basic code for the node creation
class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

//basic code for inserting the node at the head
void insertnode(node* &head, int data){
    node* nn = new node(data);
    if(head == NULL){
        head = nn;
        return;
    }
    nn -> next = head;
    head = nn;
}

//basic code to print the Linked Lists
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

//Reverse the Linked Lists function
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr != NULL){
        nextptr = currptr -> next;
        currptr -> next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

int main(){
    //creating a linked list
    node* head = NULL;
    insertnode(head,6);
    insertnode(head,5);
    insertnode(head,4);
    insertnode(head,3);
    insertnode(head,2);
    insertnode(head,1);

    //printing the Linked Lists
    print(head);

    //reversing and printing the reversed list
    node* ans = reverse(head);
    print(ans);
    return 0;
}