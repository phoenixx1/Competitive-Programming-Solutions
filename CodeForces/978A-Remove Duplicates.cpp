//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }
    cout << m.size() << endl;
    for(int i = 0; i < n; i++){
        if(m[a[i]] == 1){
            cout << a[i] << " ";
        }else{
            m[a[i]]--;
        }
    }
    return 0;
}