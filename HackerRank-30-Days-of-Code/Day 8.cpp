//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,string> phonebook;
    map<string,string>::iterator it;
    int n;
    cin >> n;
    string name, num;
    for(int i=0; i<n; i++){
        cin >> name >> num;
        phonebook.insert(pair<string,string>(name,num));
    }
    while(cin >> name){
        it = phonebook.find(name);
        if(it == phonebook.end()){
            cout << "Not found" << endl;
        }else{
            cout << it->first << "=" << it->second << endl;
        } 
    }
    return 0;
}