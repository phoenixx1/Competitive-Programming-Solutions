//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        
        while (d--){
            for (int i = 2; i <= n; i++)
                if (a[i]>0){
                    a[i]--;
                    a[i-1]++;
                    break;
                }
        }
        cout << a[1] << endl;
    }
    return 0;
}