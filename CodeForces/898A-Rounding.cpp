//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = n % 10;
    if(x){
        if(x > 5){
            x = x % 5;
            cout << n + 5 - x;
        }else{
            cout << n - x;
        }
    }else{
        cout << n;
    }
    return 0;
}