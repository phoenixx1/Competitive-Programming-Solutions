//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    while(n>0){
        if(n % 100 == 0){ 
            count++; n -= 100;
        }else if(n % 20 == 0){ 
            count++; n -= 20;
        }else if(n % 10 == 0){
            count++; n -= 10;
        }else if(n % 5 == 0){
            count++; n -= 5;
        }else{
            count++; n -= 1;
        }
    }
    cout << count;
    return 0;
}