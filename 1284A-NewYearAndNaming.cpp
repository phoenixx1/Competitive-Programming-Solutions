//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> S(n);
    vector<string> T(m);
    for(int i=0; i<n; i++){
        cin >> S[i];
    }
    for(int i=0; i<m; i++){
        cin >> T[i];
    }  
    int q;
    cin >> q;
    while(q--){
        int year; 
        cin >> year;
        string s = (year % n == 0) ? S[n-1] : S[year % n - 1];
        string t = (year % m == 0) ? T[m-1] : T[year % m - 1];
        cout << s << t << endl;
    }
    return 0;
}