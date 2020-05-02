//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> n >> m;
        vector<int> ax(n);
        vector<int> ay(m);
        int x, y, s;
        cin >> x >> y >> s;
        int temp;
        for(int i = 0; i < x; i++){
            cin >> temp;
            ax[temp-1]++;
        }
        for(int i = 0; i < y; i++){
            cin >> temp;
            ay[temp-1]++;
        }    
        int xS = 0, yS = 0;
        for(int i = 0, j = 0; i < n; i++){
            if(ax[i] == 0){
                j++;
                if(j == s){
                    xS++;
                    j = 0;
                }
            }else{
                j = 0;
            }
        }
        for(int i = 0, j = 0; i < m; i++){
            if(ay[i] == 0){
                j++;
                if(j == s){
                    yS++;
                    j = 0;
                }
            }else{
                j = 0;
            }
        }
        cout << xS * yS << endl;
    }
    return 0;
}