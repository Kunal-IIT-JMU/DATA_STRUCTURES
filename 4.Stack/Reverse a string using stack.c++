//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    stack <char> s;
    string st;
    cin >> st;
    for(int i=0; i<st.length(); i++){
        s.push(st[i]);
    }
    string ans ;
    while(!s.empty()){
        ans = ans + s.top();
        s.pop();
    }
    cout << ans << endl;
    return 0;
}