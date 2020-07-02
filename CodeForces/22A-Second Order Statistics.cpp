//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, k;
    int n, flag = 0;
    
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++){
        if(a[i] > a[i - 1]){
            cout << a[i];
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "NO" << endl;
    }
    return 0;
}