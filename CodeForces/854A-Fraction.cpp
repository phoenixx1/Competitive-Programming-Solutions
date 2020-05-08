//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0, b = 0;
    int maxA = 1;
    int z = (n >> 1);
    for (int i = 1; i < z + 1; i++){
        bool flag = 1;
        a = i;
        b = n - a;
        for (int j = 2; j <= a; j++){
            if (a % j == 0 && b % j == 0)
                flag = 0;
        }
        if (flag){
            maxA = max(a, maxA);
        }
    }

    cout << maxA << " " << n - maxA;
    return 0;
}