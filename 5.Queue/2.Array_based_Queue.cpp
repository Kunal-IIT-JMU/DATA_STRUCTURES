/*
Queue is based on F-I-F-O (First In First Out) Based Method
Array based queue is a form of queue in which we use array to store the values.
Then we use the enqueue which means to add the given data in the array after the last element of the array till it is full.
Then we use the dequeue which means to remove the first element of the array till it is empty.
*/

//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//creating a class for the queue
class queue{
    int * arr;
    int front;
    int back;

    public:
    queue(int n){
        arr = new int[n];
        front = -1;
        back = -1;
    }
};

int main(){

    return 0;
}