//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    cout << x[1] - x[0] << " " << x[n - 1] - x[0] << endl;
    for(int i = 1; i < n - 1; i++){
        int low = min(x[i] - x[i - 1], x[i + 1] - x[i]);
        int high = max(x[n - 1] - x[i], x[i] - x[0]);
        cout << low << " " << high << endl;
    }
    cout << x[n - 1] - x[n - 2] << " " << x[n - 1] - x[0] << endl;
    return 0;
}