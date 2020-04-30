//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, sum, cur, ans;
    vector<int> v;
    cin >> t;
    sum = 1, cur = 2;
    while (sum <= 1e9){
        sum += cur;
        cur <<= 1;
        v.push_back(sum);
    }
    while (t--){
        cin >> n;
        for (int x : v){
            if (n % x == 0){
                ans = n / x;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}