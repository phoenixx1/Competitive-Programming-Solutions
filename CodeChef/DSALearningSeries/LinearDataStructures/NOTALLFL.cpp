//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> s(k, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            int count = i - s[a[i] - 1];
            s[a[i] - 1] = i + 1;
            ans = max(count, ans);
        }

        for(int i = 0; i < k; i++){
            ans = max(ans, n - s[i]);
        }

        cout << ans << endl;

    }
    return 0;
}