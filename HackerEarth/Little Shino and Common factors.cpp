//author @Nishant

#include <bits/stdc++.h>
using namespace std;
long int ans(long int n){
    long int ans = 0;
    long int sqt = (long int)sqrt(n);
    for (long int i = 1; i <= sqt; i++){
        if (n % i == 0){
            ans += 2;
            if (i == n / i)
                ans--;
        }
    }
    return ans;
}

int main(int argc, char const *argv[]){
    long int a, b, GCD;
    cin >> a >> b;
    GCD = __gcd(a, b);
    cout << ans(GCD);
    return 0;
}