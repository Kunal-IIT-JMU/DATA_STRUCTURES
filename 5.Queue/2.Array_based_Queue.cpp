/*
Queue is based on F-I-F-O (First In First Out) Based Method
Array based queue is a form of queue in which we use array to store the values.
Then we use the enqueue which means to add the given data in the array after the last element of the array till it is full.
Then we use the dequeue which means to remove the first element of the array till it is empty.
*/

//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

class queue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    //creating the given class queue
    queue(){
        size = 100001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    //enqueue the given queue
    void enqueue(){
        
    }
};

int main(){
    
    return 0;
}