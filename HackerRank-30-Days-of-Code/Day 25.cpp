//
//author @Nishant

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

bool checkPrime(int x){
    for(int i=2; i<=sqrt(x); i++)
        if(x%i == 0) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x >= 2 && checkPrime(x)){
            cout << "Prime" << endl;
        }else{
            cout << "Not prime" << endl;
        }
    }
    return 0;
}