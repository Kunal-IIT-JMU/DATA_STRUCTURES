//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

#define n 100

//Class named stack to define a stack using array
class Stack{
    private:
    int* arr;
    int top;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
    }

    //creating an function to add element to the top of the stack
    void push(int x){
        if(top == n-1){
            cout << "Stack Overflow" << endl;
            return ;
        }
        top ++;
        arr[top] = x;
    }

    //Creating an function to remove element from the top of the stack
    void pop(){
        if(top == -1){
            cout << "Stack is Empty nothing to pop" << endl;
            return ;
        }
        top --;
    }

    //Creating a function to get to know the value at the top of the stack 
    int Top(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    //creating a function to check whether the given stack is empty
    bool empty(){
        return top == -1;
    }
};

int main(){
    Stack st;
    for(int i =1; i<=10; i++){
        st.push(i);
    }
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    cout << st.empty() << endl;
    return 0;
}