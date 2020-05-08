//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        if (a + b == c + d || a + c == b + d || a + d == b + c || a + b + c == d || a + c + d == b || a + b + d == c || b + c + d == a)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}