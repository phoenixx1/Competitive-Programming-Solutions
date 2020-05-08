//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int total = 0;
    if(e > f){
        while(a > 0 && d > 0){
            a--;
            d--;
            total += e;
        }
        while(b > 0 && c > 0 && d > 0){
            b--;
            c--;
            d--;
            total += f;
        }
    }else{
        while(b > 0 && c > 0 && d > 0){
            b--;
            c--;
            d--;
            total += f;
        }
        while(a > 0 && d > 0){
            a--;
            d--;
            total += e;
        }
    }
    cout << total;
    return 0;
}