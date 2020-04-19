//author @Nishant

#include<bits/stdc++.h>
using namespace std;

bool check(string s, int n){
    int i, j;
    for(i=0, j=n-1; i<n; i++, j--){
        if(s[i]==s[j]){
            return true;
        }else{
            return false;
        }
    }
    return false;
}

int main(){
    string x;
    cin >> x;
    if(check(x, x.size()))
        cout << "YES";
    else
        cout << "NO";      
}
