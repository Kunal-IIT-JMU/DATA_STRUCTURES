//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    queue <int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "size of queue is : " << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();

    cout << "size of queue is : " << q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty." << endl;
    }

    else{
        cout << "Queue is not empty." << endl;
    }

    return 0;
}



/*
There are following functions in the STL Queue
1. empty : tells whether the queue is  empty or not
2. size : returns the integer which is the size of the given 
3. front : returns the first element of the given 
4. back : return the last element of the given queue
5. pop : removes the last element of the given queue
6. push : add the element at the top of the queue before the front element
7. swap : swap the elements of the queue with the other queue
*/