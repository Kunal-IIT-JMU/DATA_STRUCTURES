//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//class for creating node 
class node {
    public:
    int data;
    node* next;
    node* prev;

    node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

//inserting an element in a row
void insert_node_head(node* &head,int data){
    node* nn = new node(data);
    if(head == NULL){
        head = nn;
        return;
    }
    nn -> next = head;
    head -> prev = nn;
    head = nn;
}

//printing the Linked Lists
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " <~> " ;
        temp = temp -> next;
    }
    cout << "NULL" << endl << endl;
}

//Function for Deletion at the head;
void deletion_node_head(node* &head){
    node* todelete = head;
    head = head -> next;
    todelete -> next = NULL;
    head -> prev = NULL;
    delete todelete;
}

//deleting the node from the tail
void deletion_node_tail(node* &head){
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    node* todelete = temp;
    temp = temp -> prev;
    temp -> next = NULL;
    todelete -> prev = NULL;
    delete todelete;
}

//Deleting the node at a position
void deletion_node_pos(node* &head, int pos){
    node* temp = head;

    while(temp -> data != pos){
        temp = temp -> next;
    }

    node* todelete = temp;
    temp = temp -> prev;
    temp -> next = todelete -> next;
    todelete -> next -> prev = temp;
    todelete -> prev = NULL;
    todelete -> next = NULL;
    delete todelete;
}

int main(){
    node* head = NULL;
    
    //for loop to insert node in a linked lists at head
    for(int i = 5; i>=1; i--){
        insert_node_head(head ,i);
    }
    print(head);

    //deleting the node from head
    deletion_node_head(head);
    print(head);

    //deleting the node from tail
    deletion_node_tail(head);
    print(head);

    //deleting the node from a certain position
    deletion_node_pos(head,3);
    print(head);

    return 0;
}