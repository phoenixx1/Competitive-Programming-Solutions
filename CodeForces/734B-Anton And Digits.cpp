//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int two, three, five, six;
    int sum = 0;
    cin >> two >> three >> five >> six;
    while(five != 0 && two != 0 && six != 0){
        sum += 256;
        five--; two--; six--;
    }
    while(three != 0 && two != 0){
        sum += 32;
        three--; two--;
    }
    cout << sum;
    return 0;
}