//KunaL Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//Class for node
class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

//Simple inserting at the head function
void insert(node* &head, int data){
    node* nn = new node(data);
    if(head == NULL){
        head = nn;
        return ;
    }
    nn -> next = head;
    head = nn;
}

//Function to print the Linked Lists
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

//Function for Deleting the node at the head
void deletionhead(node* &head){
    node* todelete = head;
    head = head -> next;
    delete todelete;
}

//Function for deleting the node at the tail
void deletiontail(node* &head){
    node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    node* todelete = temp -> next;
    temp -> next = NULL;
    delete todelete;
}

//Fumction for deleting the node at a position
void deletionpos(node* &head ,int pos){
    node* temp = head;
    while(temp -> next -> data != pos){
        temp = temp -> next;
    }
    node* todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
}

int main(){
    node* head = NULL;

    //for loop to create a linked list
    for(int i =15; i>=1; i--){
        insert(head,i);
    }

    // printing the linked lists
    print(head);

    //deleting first 4 elements from the linked lists
    for(int i =0; i<4; i++){
        deletionhead(head);
    }

    //printing the linked lists
    print(head);

    //deleting last 4 elements from the Linked Lists
    for(int i =0; i<4; i++){
        deletiontail(head);
    }

    //printing the linked lists
    print(head);

    //deleting 7 and 9 from the linked lists
    deletionpos(head,7);
    print(head);
    deletionpos(head,9);

    //printing the linked lists
    print(head);
    return 0;
}