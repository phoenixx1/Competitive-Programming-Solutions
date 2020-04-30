//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> count(26);
    for(int i = 0; i < n; i++){
        if(int(s[i]) < 91){
            count[int(s[i]) - 65]++;
        }else{
            count[int(s[i]) - 97]++;
        }
    }
    if(find(count.begin(), count.end(), 0) == count.end()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}