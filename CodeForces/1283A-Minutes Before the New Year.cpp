//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, num, tc, t = 1;
    cin >> tc;
    while (tc--) {
        long long h;
        cin >> h >> m;
        long long total = 24 * 60;
        long long have = (h * 60) + m;
        cout << total - have << endl;
    }
    return 0;
}