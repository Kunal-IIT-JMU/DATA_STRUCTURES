//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

void insert_head(node* &head, int data){
    node* nn = new node(data);
    if(head == NULL){
        nn -> next = nn;
        head = nn;
        return ;
    }
    node* temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = nn;
    nn -> next = head;
    head = nn;
}

void insert_tail(node* &head, int data){
    node* temp = head;
    node* nn = new node(data);
    while(temp -> next != head){
        temp = temp -> next;
    }
    temp -> next = nn;
    nn -> next = head;
}

int main(){
    
    return 0;
}