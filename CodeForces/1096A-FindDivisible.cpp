//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        bool found = true;
        for(int i = l; i <= r; i++){
            if(found){
                    for(int j = 2; j <= r/l; j++){
                    if(i * j < r){
                        cout << i << " " << i * j << endl;
                        found = false;
                        break;
                    }
                }
            }else{
                break;
            }
        }
    }
    return 0;
}