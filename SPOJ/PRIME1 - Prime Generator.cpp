#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(x); ++i){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        for(int i=l; i<=r; i++){
            if(isPrime(i)){
                cout << i << endl;
            }
        }
        cout << endl;
    }
}