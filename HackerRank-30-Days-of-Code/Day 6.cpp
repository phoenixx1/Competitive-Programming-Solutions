//Let's Review
//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tCases;
    cin >> tCases;
    for(int i=0; i<tCases; i++){
        string str;
        cin >> str;
        int j=0;
        while(j%2 ==0 && j<str.size()){
            cout << str.at(j);
            j += 2;
        }
        cout << " ";
        j = 1;
        while(j%2 != 0 && j<str.size()){
            cout << str.at(j);
            j += 2;
        }
        cout << endl;
    }
    return 0;
}