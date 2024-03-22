//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    //create a queue
    queue <int> q;

    //for loop for pushing the items
    for (int i =1 ; i<=10 ; i++){
        q.push(i);
    }

    //printing the isze of queue
    cout << "size of queue is -> ";
    cout << q.size() << endl;

    //printing the first element
    cout << q.front() << endl;

    //printing the last element
    cout << q.back() << endl;

    //poping the elements until it is empty also called clearing the given queue
    while(!q.empty()){
        cout << "popped" << endl;
        q.pop();
    }
    cout << "empty" << endl;

    //swapping two queue
    queue <int> q1;
    queue <int> q2;

    //adding element to q1
    q1.push(1);
    q1.push(2);
    q1.push(3);

    //adding element to q2
    q2.push(1);
    q2.push(2);

    //swapping the queue
    cout << q1.size() << endl;
    cout << q2.size() << endl;

    q1.swap(q2);
    cout << "swapped" << endl;

    cout << q1.size() << endl;
    cout << q2.size() << endl;

    /*
    Also there is one more function
    emplace :-> to add an element in the last of the queue
    */

    return 0;
}