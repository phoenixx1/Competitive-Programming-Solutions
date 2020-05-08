//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int pos = 1;
    for(int i=1; i<=n; i++){
        if(i%2){
            for(int i=1; i<=m; i++){
                cout << "#";
            }
            cout << endl;
        }else{
            if(pos == 1){
                for(int i=1; i<=m-1; i++){
                    cout << ".";
                }
                cout << "#" << endl;
                pos = 0;
            }else{
                cout << "#";
                for(int i=1; i<=m-1; i++){
                    cout << ".";
                }
                cout <<  endl;
                pos = 1;
            }
        }
    }
    return 0;
}