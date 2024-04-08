//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

//class for the stack using vectors
class Stack{
    public:
    vector <int> v;
    Stack(){
        vector <int> s;
    }

    void push(int data){
        v.push_back(data);
    }

    void pop(){
        if(v.empty()){
            cout << "Stack is Empty" << endl;
            return ;
        }
        v.pop_back();
    }

    void peek(){
        if(v.empty()){
            cout << "Stack is Empty" << endl;
            return ;
        }
        cout <<  v[v.size() -1] << endl;
    }

    bool empty(){
        return v.empty();
    }
};

int main(){
    Stack* s = new Stack();
    s->push(1);
    s->push(2);
    s->peek();
    s->pop();
    s->peek();
    s->pop();
    cout << s->empty() <<endl;   // 1 means empty and 0 means not empty
    s->peek();
    return 0;
}