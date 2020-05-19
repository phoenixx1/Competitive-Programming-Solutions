//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    for(int a = 0; a < 33; a ++){
        for(int b = 0; b < 33; b++){
            if(pow(a, 2) + b == n && pow(b, 2) + a == m){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}