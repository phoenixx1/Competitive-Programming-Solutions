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
    vector<int> p{1};
    int rest = 0, cur = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] <= a[0] / 2){
            cur += a[i];
            p.push_back(i + 1);
        }else{
            rest += a[i];
        }
    }
    if(cur > rest){
        cout << p.size() << endl;
        for(int i = 0; i < p.size(); i++){
            cout << p[i] << " \n"[i == p.size() - 1];
        }
    }else{
        cout << 0 << endl;
    }
    return 0;
}