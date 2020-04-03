//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, zCount = 0;
    cin >> n;
    string str;
    cin >> str;
    for(int i=0; i<n; i++){
        if(str[i] == 'n'){
            cout << 1 << " ";
        }else if(str[i] == 'z'){
            zCount++;
        }
    }
    for(int i=0; i<zCount; i++){
        cout << 0 << " ";
    }
    return 0;
}