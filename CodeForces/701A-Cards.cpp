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
    int sum = accumulate(a.begin(), a.end(), 0) / (n/2);
    for(int i = 0; i < n/2+1; i++){
        if(a[i] != 0){
            for (int j = 1; j <= n; j++) {
                if (a[i] + a[j] == sum && i != j) {
                    cout << i << " " << j << endl;
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
    return 0;
}