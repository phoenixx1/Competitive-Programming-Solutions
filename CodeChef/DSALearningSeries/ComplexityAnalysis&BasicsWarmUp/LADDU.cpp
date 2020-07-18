//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int activities;
        string origin;
        cin >> activities >> origin;
        int score = 0;
        for(int i = 0; i < activities; i++){
            string str;
            cin >> str;
            if(str == "TOP_CONTRIBUTOR"){
                score += 300;
            }
            if(str == "CONTEST_WON"){
                int rank;
                cin >> rank;
                score += 300;
                if(rank < 20){
                    score += 20 - rank;
                }
            }
            if(str == "CONTEST_HOSTED"){
                score += 50;
            }
            if(str == "BUG_FOUND"){
                int count;
                cin >> count;
                score += count;
            }
        }
        if(origin  == "INDIAN"){
            cout << score / 200 << endl;
        }else{
            cout << score / 400 << endl;
        }
    }
    return 0;
}