// RegEx, Patterns, and Intro to Databases
// author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    list<string> names;
    for(int i = 0; i < N; i++){
        string fName;
        string email;
        cin >> fName >> email;
        if (regex_match (email, regex(".+@gmail.com") )){
            names.push_back(fName);
        }
    }
    names.sort();
    while (!names.empty()){
        cout << names.front()<<endl;
        names.pop_front();
    }
    return 0;
}