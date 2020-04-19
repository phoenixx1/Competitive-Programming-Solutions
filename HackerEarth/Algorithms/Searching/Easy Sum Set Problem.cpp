//author @Nishant
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int> c(m);
    for(int i=0; i<m; i++){
        cin >> c[i];
    }
    vector<int> b;
    vector<int>::iterator it;
    for(int i=1; i<=100; i++){
        bool valid = true;
        for(int j=0; j<a.size(); j++){
            int x = i+a[j];
            it = find(c.begin(), c.end(), x);
            if(it == c.end()){
                valid = false;
                break;
            }
        }
        if(valid == true){
            b.push_back(i);
        }
    }
    for(int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    return 0;
}