//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>
#define n 100

using namespace std;

//class for the array implementation
class Queue{
    int* arr;
    int front1;
    int rear;
    int size;
    public:
    Queue(){
        size = n;
        arr = new int[size];
        front1 = 0;
        rear = 0; 
    }

    bool is_empty(){
        if(front1 == rear){
            return true;
        }
        return false;
    }

    void enqueue(int data){
        if(rear == size){
            cout << "queue Overflow" << endl;
            return ;
        }
        arr[rear] = data;
        rear++;
    }

    int dequeue(){
        if(front1 == rear){
            cout << "queue is empty" << endl;
            return -1;
        }
        else{
            int ans = arr[front1];
            arr[front1] = -1;
            front1 ++;
            if(front1 == rear){
                front1 =0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(){
        if(front1 == rear){
            return -1;
        }
        return arr[front1];
    }
};

int main(){
    Queue* q = new Queue();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);

    cout << q->front() << endl;
    q->dequeue();
    cout << q->front() << endl;
    q->dequeue();
    cout << q->front() << endl;

    cout << q-> is_empty() << endl;
    return 0;
}