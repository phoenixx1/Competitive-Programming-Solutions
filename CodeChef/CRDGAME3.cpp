//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int chef, rick, chefN, rickN;
        cin >> chef >> rick;

        if(chef % 9 == 0){
            chefN = chef / 9;
        }else{
            chefN = chef / 9 + 1;
        }
        

        if(rick % 9 == 0){
            rickN = rick / 9;
        }else{
            rickN = rick / 9 + 1;
        }
        
        if(chefN < rickN){
            cout << 0 << " " << chefN << endl;
        }else{
            cout << 1 << " " << rickN << endl;            
        }
        
    }
    return 0;
}