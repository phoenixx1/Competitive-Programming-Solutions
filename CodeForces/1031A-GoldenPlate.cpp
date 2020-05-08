//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, h, k;
    cin >> w >> h >> k;
    int count = 0;
    while(k--){
        count += 2 * h + 2 * (w - 2);
        w -= 4;
        h -= 4;
    }
    cout << count;
    return 0;
}