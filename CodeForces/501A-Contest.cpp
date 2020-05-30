//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(max(3 * a / 10, a - (a * c) / 250) > max(3 * b / 10, b - (b * d) / 250)){
        cout << "Misha";
    }else if(max(3 * a / 10, a - (a * c) / 250) < max(3 * b / 10, b - (b * d) / 250)){
        cout << "Vasya";
    }else{
        cout << "Tie";
    }
    return 0;
}