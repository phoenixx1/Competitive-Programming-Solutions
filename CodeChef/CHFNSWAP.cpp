#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1 || n == 2 || n == 0){
            cout << 0 << endl;
        }else{
            int sum = n * (n + 1) / 2;
            if(sum % 2){
                cout << 0 << endl;
            }else{
                // cout << n / 2 << endl;
                int count = 0;
                sum /= 2;
                for(int i = n; i > 0; i--){
                    if(sum >= i){
                        sum -= i;
                        count++;
                    }else{
                        if(sum < i - 1){
                            count++;
                            break;
                        }
                    }
                }
                cout << count << endl;
            }
        }
    }
    return 0;
}