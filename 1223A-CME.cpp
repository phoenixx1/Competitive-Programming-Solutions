//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        unsigned int n;
        cin >> n;
        if(n == 2){
            cout << 2 << endl;
        }else{
            n = n & 1;
            cout << n << endl;
        }
    }
    return 0;
}