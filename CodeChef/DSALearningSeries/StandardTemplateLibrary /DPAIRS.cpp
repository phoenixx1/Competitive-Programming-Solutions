//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    int low = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] < a[low]) {
			low = i;
		}
	}

	int high = 0;

	for (int i = 0; i < m; i++) {
		cin >> b[i];
		if (b[i] > b[high]) {
			high = i;
		}
	}

	for (int i = 0; i < m; i++) {
		if (i == high) continue;
		cout << low << ' ' << i << endl;
	}

	for (int i = 0; i < n; i++) {
		cout << i << ' ' << high << endl;
	}

    return 0;
}