/*
I/N
5 1
1 2 3 4 1
O/P
5
*/

//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> test(n);
    for(int i=0; i<n; i++){
        cin >> test[i];
    }
    int pos = -1;
    for(int i=n-1; i>=0; i--){
        if(test[i] == m){
            pos = i+1;
            break;
        }
    }
    cout << pos;
}