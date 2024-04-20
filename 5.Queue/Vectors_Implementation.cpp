//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

class Queue {
    public:
    vector <int> v;

    void push(int a){
        v.push_back(a);
    }

    void Pop(){
        v.erase(v.begin());
    }

    int top(){
        int ans = *v.begin();
        return ans;
    }

    bool is_empty(){
        return v.empty();
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout  << q.top() << endl;
    q.Pop();
    cout  << q.top() << endl;
    q.Pop();
    cout  << q.top() << endl;
    q.Pop();
    if(q.is_empty()){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue if not empty" << endl;
    }
    return 0;
}