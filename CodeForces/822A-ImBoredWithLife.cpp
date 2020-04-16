//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int ans = 1;
    for(int i=1; i<=min(x, y); i++){
        ans *= i;
    }
    cout << ans;
    return 0;
}