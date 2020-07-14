//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int g;
        cin >> g;
        while (g--){
            int i, n, q;
            cin >> i >> n >> q;
            int heads = n / 2;
            int tails = n - heads;
            if (q == 1){
                if (i == 1){
                    cout << heads << endl;
                }
                else{
                    cout << tails << endl;
                }
            }
            else{
                if (i == 1){
                    cout << tails << endl;
                }
                else{
                    cout << heads << endl;
                }
            }
        }
    }
    return 0;
}