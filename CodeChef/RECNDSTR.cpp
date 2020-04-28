//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string S;
        cin >> S;
        int N = S.length();
        cout << ((S.substr(1) + S[0]) == (S[N - 1] + S.substr(0, N - 1)) ? "YES\n" : "NO\n");
    }
    return 0;
}