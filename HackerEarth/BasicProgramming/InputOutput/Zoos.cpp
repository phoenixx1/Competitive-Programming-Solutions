//author @Nishant

#include<iostream>
using namespace std;

int main(){
    string str;
    int i;
    cin >> str;
    for(i=0; i<str.size(); i++){
        if(str[i]=='o'){
            break;
        }
    }
    if(i*2 == str.size()-i){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}