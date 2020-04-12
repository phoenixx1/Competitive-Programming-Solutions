//author @Nishant

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
        if((int)s[0]-48 == 8 && n == 11){
            cout << "YES\n";
        }else{
            int i;
            bool flag = false;
            for(i=0; i<n-10; i++){
                if((int)s[i] - 48 == 8){
                    flag = true;
                    break;
                }

            }if(flag){
                if(n-i >= 10){
                    cout << "YES\n";
                }else{
                    cout << "NO\n";
                }
            }else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}