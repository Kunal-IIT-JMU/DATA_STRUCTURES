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

//Function to reverse the Given Dooubly Linked Lists
node* Reverse(node* head){
    if(!head)
    return NULL;

    node* temp = head -> next;
    head -> next = head -> prev;
    head -> prev = temp;

    if(!head -> prev)
    return head;
    else
    return(Reverse(head->prev));

}
int main(){
    node* head = NULL;
    for(int i = 10; i>= 1; i--){
        insert_node_head(head,i);
    }
    print(head);

    //reversing the given Doubly Linked List
    head = Reverse(head);
    print(head);
    return 0;
}