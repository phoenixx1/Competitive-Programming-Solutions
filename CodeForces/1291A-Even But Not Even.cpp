// author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a = 0, b = 0, temp;

        for(int i = 0; i < n; i++){
            temp = s[i] - '0';
            if(temp & 1){
                if(a == 0){
                    a = temp;
                }else{
                    b = temp;
                }
            }
        }

        if(a == 0 || b == 0){
            cout << -1;
        }else{
            cout << a << b;
        }
        cout << endl;
    }
    return 0;
}