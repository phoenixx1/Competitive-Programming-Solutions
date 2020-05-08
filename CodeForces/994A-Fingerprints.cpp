//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    vector<int> y(m);
    for(int i = 0; i < m; i++){
        cin >> y[i];
    }
    for(int t : x){
        if(find(y.begin(), y.end(), t) != y.end()){
            cout << t << " ";
        }
    }
    return 0;
}