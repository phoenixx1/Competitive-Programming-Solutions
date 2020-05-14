//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int i = 1;
    int turn = 1;
    while(x != 0 || y != 0){
        if(turn == 1 && x >= i){
            x -= i;
            i++;
            turn = 0;
        }else if(turn == 0 && y >= i){
            y -= i;
            i++;
            turn = 1;
        }else{
            break;
        }
    }
    if(turn){
        cout << "Vladik";
    }else{
        cout << "Valera";
    }
    return 0;
}