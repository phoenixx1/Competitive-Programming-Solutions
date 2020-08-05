//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long sum = 0;
        int MIN = INT_MAX;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x >= MIN){
                sum += MIN;
            }else{
                MIN = x;
                sum += MIN;
            }
        }
        cout << sum << endl;
    }
    return 0;
}