//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<pair<int, int>> a(k), b(k);
        for(int i = 0; i < k; i++){
            cin >> a[i].first >> a[i].second;
            b[i] = {a[i].second, a[i].first};
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int x=0, y=0;
        for(int i=1; i<k; i++){
            if(a[i].first == a[i - 1].first && a[i].second - 1 == a[i - 1].second){
                x++;
            }
            if(b[i].first == b[i - 1].first && b[i].second - 1 == b[i - 1].second){
                y++;
            }
        }
        cout << 4 * k - (x + y) * 2 << endl;

    }
    return 0;
}