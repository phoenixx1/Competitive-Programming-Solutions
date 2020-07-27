//author @Nishant

#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
    int n, k;
    cin >> n >> k;
    stack<pair<int, int>> s;
    int val;
    long long ans = 1;
    for(int i = 0; i < n; i++){
        cin >> val;
        while(!s.empty() && s.top().first > val){
            ans = (ans * (i - s.top().second + 1)) % mod;
            s.pop();
        }
        s.push({val, i});
    }
    cout << ans << endl;
    return 0;
}