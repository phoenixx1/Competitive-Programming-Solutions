//author @Nishant 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for (int j = 0; j < n; ++j) {
			cout << char('a' + j % k);
		}
        cout << endl;
    }
    return 0;
}