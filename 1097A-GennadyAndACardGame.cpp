//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    string top, temp;
    cin >> top;
    
    vector<char> rank(5);
    vector<char> suit(5);
    
    for(int i=0; i<5; i++){
        cin >> temp;
        rank[i] = temp[0];
        suit[i] = temp[1];
    }
    
    vector<char>::iterator it, it1;
    
    it = find(rank.begin(), rank.end(), top[0]);
    it1 = find(suit.begin(), suit.end(), top[1]);

    if(it != rank.end() || it1 != suit.end()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}