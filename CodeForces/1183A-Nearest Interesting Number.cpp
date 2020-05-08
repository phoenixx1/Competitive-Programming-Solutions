//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int sum(int a) {
    int result = 0;
    while (a > 0) {
        result += a % 10;
        a /= 10;
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    while (sum(n) % 4 != 0) {
        n++;
    }
    cout << n;
    return 0;
}