//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    const long MOD = 1000000007;
    long n, k;
    cin >> n >> k;
    vector<long> a(n, 0);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long int ans[n];
    ans[0] = a[0];
    double log1[n];
    set<pair<double, int>> mp;
    log1[0] = log(a[0]);
    mp.insert({log1[0], 0});
    for (int i = 1; i < n; i++){
        auto it = mp.begin();
        int v = it->second;
        double mini = it->first;
        if ((i - k) >= 0){
            mp.erase({log1[i - k], i - k});
        }
        log1[i] = mini + log(a[i]);
        ans[i] = (ans[v] * a[i]) % MOD;
        mp.insert({log1[i], i});
    }
    cout << ans[n - 1] << endl;
    return 0;
}