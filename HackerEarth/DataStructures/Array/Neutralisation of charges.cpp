//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    int i = 0;
    while(i != n){
        if(st.empty()){
            st.push(s[i]);
        }else if(s[i] == st.top()){
            st.pop();
        }else{
            st.push(s[i]);
        }
        i++;
    }
    n = st.size();
    for(int i = 0; i < n; i++){
        cout << st.top();
        st.pop();
    }
    return 0;
}