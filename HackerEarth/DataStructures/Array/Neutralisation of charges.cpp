//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> a;
    int i = 0;
    while(i < n){
        if(a.empty()){
            a.push_back(s[i]);
        }else if(s[i] == a[a.size() - 1]){
            a.pop_back();
        }else{
            a.push_back(s[i]);
        }
        i++;
    }
    cout << a.size() << endl;
    for(int i = 0; i < a.size(); i++){
        cout << a[i];
    }
    return 0;
}