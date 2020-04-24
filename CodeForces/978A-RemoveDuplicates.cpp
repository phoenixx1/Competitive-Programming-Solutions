//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_set<int> s;
    for(int i = n-1; i>=0; i--){
        if(s.find(a[i]) == s.end()){
            s.insert(a[i]);
        }
    }
    cout << s.size() << endl;
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    return 0;
}