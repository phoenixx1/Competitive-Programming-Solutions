//auhtor @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        string frnt = "", lst = "";
        for(int i = 0; i < n / 2; i++){
            frnt += s[i];
        }
        if(n % 2){
            frnt += s[n/2];
        }
        for(int i = n / 2; i < n; i++){
            lst += s[i];
        }
        map<char, int> mp;
        bool flag = true;
        for(char x : frnt){
            mp[x]++;
        }
        for(char x : lst){
            mp[x]--;
            if(mp[x] < 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}