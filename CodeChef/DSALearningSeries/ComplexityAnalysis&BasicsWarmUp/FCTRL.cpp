//author @Nishant

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n; 
        ll ans = 0, factor = 5;
        while(n / factor > 0){
            ans += (n / factor);
            factor *= 5;
        }
        cout << ans << endl;
    }
    return 0;
}