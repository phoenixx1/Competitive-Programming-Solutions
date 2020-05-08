//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    string ans = "EASY";
    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp == 1){
            ans = "HARD";
        }
    }
    cout << ans;
    return 0;
}