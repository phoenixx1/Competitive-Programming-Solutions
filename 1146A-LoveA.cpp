//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    double n = s.length();
    int countA = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'a'){
            countA++;
        }
    }
    if(countA > n/2){
        cout << int(n);
    }else{
        while(n/2 >= countA){
            n--;
        }
        cout << n;
    }
    return 0;
}