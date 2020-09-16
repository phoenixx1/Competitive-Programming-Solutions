//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<string, int> chefs;
    map<string, int> country;
    map<string, string> cc;
    string ch, cn;
    for(int i = 0; i < n; i++){
        cin >> ch >> cn;
        chefs[ch] = 0;
        country[cn] = 0;
        cc[ch] = cn;
    }
    string temp;
    for(int i = 0; i < m; i++){
        cin >> temp;
        chefs[temp]++;
        country[cc[temp]]++;
    }
    int ans = INT_MIN;
    string out = "";
    for(auto it = country.begin(); it != country.end(); ++it){
        if(it->second == ans){
            continue;
        }else if(it->second > ans){
            ans = it->second;
            out = it->first;
        }
    }
    cout << out << endl;
    ans = INT_MIN, out = "";
    for(auto it = chefs.begin(); it != chefs.end(); ++it){
        if(it->second == ans){
            continue;
        }else if(it->second > ans){
            ans = it->second;
            out = it->first;
        }
    } 
    cout << out << endl;
    
    return 0;
}