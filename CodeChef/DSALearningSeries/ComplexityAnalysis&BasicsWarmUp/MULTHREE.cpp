//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int d0, d1, count = 2;
        bool check = false;
        long long k, sum = 0, num, k1;
        cin >> k >> d0 >> d1;
        sum += d0 + d1;
        num = sum % 10;
        k1 = k - 2;
        while(num != 8 && k1-- > 0){
            if(num == 0){
                check = true;
                break;
            }
            sum += num;
            num = sum % 10;
            count++;
        }
        if(!check){
            k -= count;
            sum += (k / 4) * 20;
            if(k % 4 == 1) sum += 8;
            else if( k % 4 == 2) sum += 14;
            else if( k % 4 == 3) sum += 16;
        }
        if(sum % 3 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}