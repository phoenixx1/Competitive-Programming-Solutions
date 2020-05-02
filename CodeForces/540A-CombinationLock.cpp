//author @Nishannt

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    string curr, key;
    cin >> curr >> key;
    int ans = 0;//, antiCWise, clockWise;
    for (int i = 0; i < n; i++)
        ans += min(10 - abs(curr[i] - key[i]), abs(curr[i] - key[i]));
    cout << ans << endl;
    return 0;
}