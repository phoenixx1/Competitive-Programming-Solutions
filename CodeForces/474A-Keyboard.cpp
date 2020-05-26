//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./", m;
    char d;
    cin >> d >> m;
    for(int i = 0; i < m.size(); i++){
        if(d == 'R'){
            int k = key.find(m[i], 0);
            cout << key[k - 1];
        }else{
            int k = key.find(m[i], 0);
            cout << key[k + 1];
        }
    }
    return 0;
}