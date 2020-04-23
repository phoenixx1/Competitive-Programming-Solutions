//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int aW = 0, dr = 0, bW = 0;
    for (int i = 1; i <= 6; i++){
        if (abs(a - i) < abs(b - i))
            aW++;
        else if (abs(b - i) < abs(a - i))
            bW++;
        else
            dr++;
    }
    cout << aW << " " << dr << " " << bW;
    return 0;
}