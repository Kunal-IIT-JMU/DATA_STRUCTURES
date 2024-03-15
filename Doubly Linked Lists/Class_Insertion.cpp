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

//Inserting the node in a Double Linked Lists at the head
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

//Insertin the Node in a Doubly Linked Lists at the tail
void insert_node_tail(node* &head, int data){
    node* nn = new node(data);
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = nn;
    nn -> prev = temp;
}

//Inserting the node in a Doubly Linked Lists at a position
void insert_node_pos(node* &head, int data,int pos){
    node* nn = new node(data);
    node* temp = head;
    while(temp -> data != pos){
        temp = temp -> next;
    }
    nn -> next = temp -> next;
    temp -> next -> prev = nn;
    temp -> next = nn;
    nn -> prev = temp;
}

//printing the Linked Lists
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " <~> " ;
        temp = temp -> next;
    }
    cout << "NULL" << endl << endl;
}

int main(){
    node* head = NULL;
    
    //for loop to insert node in a linked lists at head
    for(int i = 5; i>=1; i--){
        insert_node_head(head ,i);
    }
    print(head);

    //for loop to insert node in a linked lists at tail
    for(int i = 6; i<=10; i++ ){
        insert_node_tail(head,i);
    }
    print(head);

    //inserting 0 btween 5 and 6
    insert_node_pos(head,0,5);
    print(head);

    //reverse printing the linked list to check it is linked from both side
    cout << "Checking the double sided linkage by reverse printing the Linked Lists." << endl << endl;

    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    while(temp != NULL){
        cout << temp -> data << " <~> ";
        temp = temp -> prev;
    }
    cout << "NULL" << endl << endl;
    return 0;
} 