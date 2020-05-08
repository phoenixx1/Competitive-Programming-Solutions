//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    while(n--){
        string s;
        cin >> s;
        if(!mp[s]){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
        mp[s]++;
    }
    return 0;
}