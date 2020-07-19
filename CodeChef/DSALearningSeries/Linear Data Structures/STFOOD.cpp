//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int profit = 0;
        for(int i = 0; i < n; i++){
            int s, p, v, temp;
            cin >> s >> p >> v;
            temp = p / (s + 1);
            temp *= v;
            if(temp > profit){
                profit = temp;
            }
        }
        cout << profit << endl;
    }
    return 0;
}