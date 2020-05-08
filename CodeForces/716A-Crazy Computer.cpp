//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c;
    cin >> n >> c;
    vector<int> t(n);
    for(int i=0; i<n; i++){
        cin >> t[i];
    }
    int count = 0;
    for(int i=1; i<n; i++){
        if(t[i] - t[i-1] <= c){
            count++;
        }else{
            count = 0;
        }
    }
    cout << count + 1;
    return 0;
}