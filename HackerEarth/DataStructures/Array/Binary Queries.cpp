//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int x;
            cin >> x;
            a[x] ^= 1;
        }else{
            int l, r;
            cin >> l >> r;
            string ans = a[r] == 1 ? "ODD" : "EVEN";
            cout << ans << endl;
        }
    }
    return 0;
}