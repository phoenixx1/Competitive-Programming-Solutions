//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> a;
        while(n--){
            int temp; cin >> temp;
            a.insert(temp);
        }
        cout << a.size() << endl;
    }
    return 0;
}