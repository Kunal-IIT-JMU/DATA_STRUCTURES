//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

class Queuenode{
    public:
    int data;
    Queuenode* next;

    Queuenode(int d){
        data = d;
        next = NULL;
    }
};

void push(Queuenode* &top, int d){
    Queuenode* temp = top;
    Queuenode* nn = new Queuenode(d);
    if(top == NULL){
        top = nn;
        return;
    }
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = nn;
}

void pop(Queuenode* &top){
    Queuenode* todelete;
    todelete = top;
    top = top -> next;
    delete todelete;
}

void isempty(Queuenode* &top){
    if(top == NULL){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue is not empty" << endl;
}

int peek(Queuenode* &top){
    return top->data;
}

int main(){
    Queuenode* Queue = NULL;
    push(Queue,1);
    push(Queue,2);
    push(Queue,3);
    push(Queue,4);
    cout << peek(Queue) << endl;
    pop(Queue);
    cout << peek(Queue) << endl;
    pop(Queue);
    isempty(Queue);
    cout << peek(Queue) << endl;
    pop(Queue);
    cout << peek(Queue) << endl;
    pop(Queue);
    isempty(Queue);
    return 0;
}