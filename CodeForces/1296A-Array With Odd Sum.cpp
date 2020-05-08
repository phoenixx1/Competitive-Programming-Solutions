//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
		cin >> n;
		int sum = 0;
		bool odd = false, even = false;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			sum += x;
			odd |= x % 2 != 0;
			even |= x % 2 == 0;
		}
		if (sum % 2 != 0 || (odd && even)) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
    return 0;
}