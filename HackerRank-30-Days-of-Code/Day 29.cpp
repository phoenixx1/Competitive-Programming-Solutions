// Bitwise AND
// author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int n, k;
        cin >> n >> k;
        int max = 0, ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                int x = i & j;
                if(x<k && x > max){
                    max = x;
                    ans = x;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}