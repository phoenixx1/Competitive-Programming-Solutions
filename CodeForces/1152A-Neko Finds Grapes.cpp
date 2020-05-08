//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int aO = 0, aE = 0;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp % 2){
            aO++;
        }else{
            aE++;
        }
    }
    int bO = 0, bE = 0;
    for(int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        if(temp % 2){
            bO++;
        }else{
            bE++;
        }
    }
    int count = 0;
    if(aO >= bE){
        count += bE;
    }else{
        count += aO;
    }
    if(aE >= bO){
        count += bO;
    }else{
        count += aE;
    }
    cout << count;

    return 0;
}