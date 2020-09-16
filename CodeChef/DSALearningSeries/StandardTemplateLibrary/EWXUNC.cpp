//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    set<long long> s;
    for(long long i = 0; i < n; i++){
        cin >> a[i];    
    }
    s.insert(0);
    for(long long i = 1; i < a.size(); i++){
        if((a[i]%a[i - 1])){
            s.insert(i);
        }
    }
    while(q--){
        long long type, i, X;
        cin >> type;
        if(type == 1){
            cin >> i >> X;
            a[i - 1] = X;
            s.insert(i - 1);
            s.insert(i);
            if(!(a[i - 1]%a[i - 2])){
                s.erase(i - 1);
            }
            if(!(a[i]%a[i - 1])){
                s.erase(i);
            }
        }else{
            cin >> i;
            auto x = s.upper_bound(i - 1);
            x--;
            cout << (*x) + 1 << endl;
        }
    }
    return 0;
}