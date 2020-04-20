// Exceptions - String to Integer
// author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    try{
        int num = stoi(s);
        cout << num;
    }catch(exception){
        cout << "Bad String";
    }
    return 0;
}