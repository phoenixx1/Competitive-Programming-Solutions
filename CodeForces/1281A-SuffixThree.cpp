//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char x = s[s.length()-1];
        if(x == 'o'){
            cout << "FILIPINO\n";
        }else if(x == 'a'){
            cout << "KOREAN\n";
        }else{
            cout << "JAPANESE\n";
        }
    }
    return 0;
}