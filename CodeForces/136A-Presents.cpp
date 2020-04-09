//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, arr[105];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        arr[temp] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}