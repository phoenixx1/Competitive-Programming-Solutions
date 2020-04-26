//author @Nishant

#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int x, y;
        cin >> x >> y;
        int t = x, f = 0, z = 2, ans = 0;
        if(x >= y){
            if(y == 1){
                if(x >= 2){
                    ans = 1;
                }
            }else{
                int p = 0;
                for(int i=2; i*i<=x; i++){
                    if(x % i == 0){
                        p = 1;
                        break;
                    }
                }
                if(p == 1){
                    int p1 = 0;
                    for(int i=2; i*i<=x; i++){
                        while(x % i == 0){
                            p1++;
                            x /= i;
                        }
                    }
                    if(x > 2){
                        p1++;
                    }
                    if(p1 >= y){
                        ans = 1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}