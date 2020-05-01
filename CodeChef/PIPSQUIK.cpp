//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, h, y1, y2, l;
        cin >> n >> h >> y1 >> y2 >> l;
        vector<pair<int, int>> a;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            a.push_back(make_pair(x, y));
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            int type = a[i].first;
            if(type == 1){
                if(h - y1 <= a[i].second){
                    count++;
                }else{
                    l--;
                    if(l > 0){
                        count++;
                    }else{
                        break;
                    }
                }
            }else{
                if(y2 >= a[i].second){
                    count++;
                }else{
                    l--;
                    if(l > 0){
                        count++;
                    }else{
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}