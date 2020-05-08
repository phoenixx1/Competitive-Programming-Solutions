//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,j,k, n;
    string s,t;
    map<char,char> mp;
    cin >> s >> t;

    for(i = 0; i < s.length(); i++)
        mp[s[i]] = t[i];

    cin >> s;

    char ch;
    for(i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            cout << s[i];
            continue;
        }
        if(mp[s[i]])
            cout << mp[s[i]];
            
        else{
            if(isupper(s[i])){
                ch = mp[s[i] + 32] - 32;
                cout << (ch);
            }else{
                ch = mp[s[i] - 32] + 32;
                cout << ch;
            }
        }
    }
    return 0;
}