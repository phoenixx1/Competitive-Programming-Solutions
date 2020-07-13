//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp, newN = 0;
        while(n){
            temp = n % 10;
            newN = newN * 10 + temp;
            n /= 10;
        }
        cout << newN << endl;
    }
    return 0;   
}