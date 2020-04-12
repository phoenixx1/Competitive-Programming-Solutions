//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        if(s[0] == 8 && n == 11){
            cout << "YES\n";
        }else{
            int i;
            bool flag = false;
            for(i=0; i<n-10; i++){
                if(s[i]==8){
                    flag = true;
                    break;
                }

            }if(flag){
                if(n-i == 10){
                    cout << "YES\n";
                }
            }else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}