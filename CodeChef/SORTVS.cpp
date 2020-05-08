//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<pair<int, int>> p;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            p.push_back(make_pair(x, y));
        }
        if(m != 0){
            for(int i = 0; i < m; i++){
                if(a[p[i].first] != p[i].first && a[p[i].second] != p[i].second){
                    iter_swap(a.begin() + p[i].first, a.begin() + p[i].second);
                }
            }
        }
        if(is_sorted(a.begin(), a.end())){
            cout << 0 << endl;
        }else{
            int count = 0;
            for(int i = 1; i <= n; i++){
                if(a[i] != i){
                    iter_swap(a.begin() + i, a.begin() + a[i]);
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}