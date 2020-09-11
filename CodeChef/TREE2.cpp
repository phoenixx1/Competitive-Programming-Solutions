#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int count = 0;
        vector<int> ans;
        for(int i = 0; i < n - 1; i++){
            if(a[i] != a[i + 1]){
                ans.push_back(a[i + 1]);
            }
        }
        if(a[n - 1] != 0){
            cout << ans.size() + 1 << endl;
        }else{
            cout << ans.size() << endl;
        }
    }
    return 0;
}