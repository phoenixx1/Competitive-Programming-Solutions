//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    if(a >= x){
        a -= x;
        if(a + b >= y){
            a -= y;
            if(a + b + c >= z){
                cout << "YES";
            }else{
               cout << "NO";
            }
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }
    return 0;
}