//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    stack <char> ele;
    string elements;
    cin >> elements;
    for(int i =0; i<elements.length(); i++){
        if(elements[i] == '(' || elements[i] == '{' || elements[i] == '['){
            ele.push(elements[i]);
        }
        else{
            if(!ele.empty()){
                char t = ele.top();
                if(elements[i] == '}' && t == '{'  || elements[i] == ')' && t == '(' || elements[i] == ']' && t == '['){
                    ele.pop();
                }
                else{
                    cout << "Not Balanced" << endl;
                    return 0;
                }
            }
            else{
                cout << "Not Balanced" << endl;
                return 0;
            }
        }
    }
    if(ele.empty()){
        cout << "Balanced" << endl;
        return 0;
    }
    else{
        cout << "Not Balanced" << endl;
        return 0;
    }
    return 0;
}