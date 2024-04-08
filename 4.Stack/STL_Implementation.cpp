//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){

    //creaating a stack
    stack <int> s;

    //adding an element in the stack 
    s.push(0);

    //priting the top element if a stack
    cout << s.top() << endl;

    //removing an element from the stack
    s.pop();

    //checking whether stack is empty
    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    return 0;
}