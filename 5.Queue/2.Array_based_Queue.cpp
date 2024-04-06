/*
Queue is based on F-I-F-O (First In First Out) Based Method
Array based queue is a form of queue in which we use array to store the values.
Then we use the enqueue which means to add the given data in the array after the last element of the array till it is full.
Then we use the dequeue which means to remove the first element of the array till it is empty.
*/

//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

#define n 20

//creating a class for the queue
class queue{
    int * arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    //function for adding a number in the queue
    void push(int x){
        if(back == n-1){
            cout << "queue overflow" << endl;
            return;
        }
        back ++;
        arr[back] = n;
        if(front == -1){
            front ++;
        }
    }

    //creating a function for removing from back 
    void pop(){
        if(front == -1 || front > back){
            cout << "empty queue" << endl;
            return ;
        }
        front++;
    }

    //creating a function for peeking the queue
    int peek(){
        if(front == -1 || front > back){
            cout << "empty queue" << endl;
            return ;
        }
        return arr[front];
    }

    //function for checking the given queue is an empty queue
    bool empty(){
        if(front == -1 || front < back){
            return true;
        }
        return false;
    }
};

int main(){
    
    return 0;
}