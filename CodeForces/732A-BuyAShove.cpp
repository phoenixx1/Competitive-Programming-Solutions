//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    int i;
    for(i=1; i<100; i++){
        if((k * i) % 10 == r || (k * i) % 10 == 0){
            break;
        }
    }
    cout << i;
    return 0;
}