//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int ans = 0;
    while(n >= 0){
        ans += i;
        n -= ans;
        i++;
    }
    cout << i - 2;
    return 0;
}