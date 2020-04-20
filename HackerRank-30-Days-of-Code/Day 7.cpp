//Arrays
//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mat[n];
    for(int i=0; i<n; i++){
        cin >> mat[i];
    }
    for(int i=n-1; i>=0; i--){
        cout << mat[i] << " ";
    }
    return 0;
}