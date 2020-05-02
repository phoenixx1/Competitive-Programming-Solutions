//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a = 0, b = 0, temp;
    for(int i = 0; i < 3; i++){
        cin >> temp;
        a += temp;
    }
    for(int i = 0; i < 3; i++){
        cin >> temp;
        b += temp;
    }
    cin >> n;
    while(n-- && (a > 0 || b > 0)){
        if(a > 0){
            a -=5;
        }else if(b > 0){
            b -= 10;
        }
    }
    if(a <= 0 && b <= 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}