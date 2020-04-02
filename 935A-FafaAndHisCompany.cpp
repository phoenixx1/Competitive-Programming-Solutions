//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, rest, count = 0;
    cin >> n;
    for(int i=1; i<n; i++){
        l = i;
        if((n - l)%l == 0){
            count++;
        }
    }
    cout << count;
    return 0;
}