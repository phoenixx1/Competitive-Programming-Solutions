// Intro to Conditional Statements
// author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    if(N%2){
        cout << "Weird";
    }else{
        if(N>=6 && N<=20){
            cout << "Weird";
        }else{
            cout << "Not Weird";
        }
    }
    return 0;
}