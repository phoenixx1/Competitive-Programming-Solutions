//autor @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int b, p, f, h, c, profit = 0;
        cin >> b >> p >> f >> h >> c;
        while(b>=2){
            if((h > c || f < 1) && p >= 1){
                profit += h;
                p--;
                b -= 2;
            }else if(f >= 1){
                profit += c;
                f--;
                b -= 2;
            }else{
                break;
            }
        }
        cout << profit << endl;
    }
    return 0;   
}