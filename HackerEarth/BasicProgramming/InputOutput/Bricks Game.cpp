//author @Nishant

#include <iostream>
using namespace std;

int main(){
    int n, sum = 0, prev, i;
    cin >> n;
    for (i = 0; i < n; i++){
        if(sum < n){
            prev = sum;
            sum += i + i*2;
        }else{
            break;
        }
    }
    i--;
    sum = n - prev;
    if(sum <= i){
        cout << "Patlu";
    }else{
        cout << "Motu";
    }
}