//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x==1)
        cout << -1;
    else
        cout << x-x%2 << ' ' << 2;
    return 0;
}