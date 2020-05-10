//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = k + (k / (n - 1));
        if(ans % n == 0){
            cout << ans - 1 << endl;
        }else{
            cout << ans << endl;
        }  
    }
    return 0;
}