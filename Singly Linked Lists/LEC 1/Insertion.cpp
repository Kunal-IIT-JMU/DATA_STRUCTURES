//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Basic Code For Creating A Node
class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

//Function to add a Node at head
void insertnodehead(node* &head,int data){
    node* nn = new node(data);
    if(head == NULL)
    head == nn;
    nn -> next = head;
    head = nn;
}

//Function to add a Node at position
void insertnode(node* &head,int data,int pos){
    node* nn = new node(data);
    node* temp = head;
    while(temp->data != pos){
        temp = temp -> next;
    }
    nn -> next = temp -> next;
    temp ->next = nn;
}

//Function to add a node at tail
void insertnodetail(node* head, int data){
    node* nn = new node(data);
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = nn;
}

//printing the linked lists;
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    node* head = NULL;

    //for loop for inserting the elements at the head
    for(int i =5; i>=1; i--){
        insertnodehead(head,i);
    }

    //printing the output
    print(head);

    //for loop for inserting the elements at the position
    for(int i =6; i<=10;i++){
        insertnode(head,i,i-1);
    }

    //printing the output
    print(head);

    //for loop for inserting the elements at the tail
    for(int i =11; i<=15;i++){
        insertnodetail(head,i);
    }

    //printing the output
    print(head);

    return 0;
}