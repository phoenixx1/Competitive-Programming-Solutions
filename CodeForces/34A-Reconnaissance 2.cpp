//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int minR = INT_MAX;
    int fs, sc, cur;
    int n;
    cin >> n;
    cin >> fs;
    sc = fs;
    int x = 1, y = 2;
    for(int i = 1; i < n; i++){
        cin >> cur;
        sc = abs(sc - cur);
        if(minR > sc){
            x = i;
            y = i + 1;
            minR = sc;
        }
        sc = cur;
    }
    if(abs(fs - cur) < minR){
        x = n;
        y = 1;
    }
    cout << x << " " << y;
    return 0;
}