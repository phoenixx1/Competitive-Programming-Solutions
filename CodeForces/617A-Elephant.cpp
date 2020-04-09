//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, count = 0;
    cin >> x;
    while(x){
        if(x-5 >= 0){
            count++;
            x -= 5;
        }else if(x-4 >= 0){
            count++;
            x -= 4;
        }else if(x-3 >= 0){
            count++;
            x -= 3;
        }else if(x-2 >= 0){
            count++;
            x -= 2;
        }else{
            count++;
            x -= 1;
        }
    }
    cout << count;
    return 0;
}