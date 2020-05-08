//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    map<int, int> a;
    vector<int> pos;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(a[temp] == 0 && pos.size() != k){
            a[temp] = i+1;
            pos.push_back(i+1);
        }
    }
    if(a.size() >= k){
        cout << "YES" << endl;
        for(int x : pos){
            cout << x << " ";
        }
    }else{
        cout << "NO";
    }

    return 0;
}