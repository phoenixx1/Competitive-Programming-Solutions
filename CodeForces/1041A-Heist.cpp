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
    sort(a.begin(), a.end());
    int count = 0;
    for(int i=1; i<n; i++){
        if(a[i]-1 != a[i-1]){
            count += a[i] - a[i-1] - 1;
        }
    }
    cout << count;
    return 0;
}