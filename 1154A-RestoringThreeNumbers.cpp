//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> x(4);
    for(int i=0; i<4; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    cout << x[3] -x[0] << " " << x[3] -x[1] << " " << x[3] -x[2];
    return 0;
}