//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int temp, curMmin = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(temp <= curMmin){
                curMmin = temp;
            }
        }
        if(curMmin >= k){
            cout << 0 << endl;
        }else{
            cout << k - curMmin << endl;
        }
    }
    return 0;
}