//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0, goalA = n, goalB = n, goal = 2 * n;
        for(int i = 0; i < 2 * n; i++){
            if(i % 2){
                if(s[i] == '1'){
                    b++;    
                }
                goalB--;
            }else{
                if(s[i] == '1'){
                    a++;
                }
                goalA--;
            }
            if(a > (b + goalB) || b > (a + goalA)){
                goal = i + 1;
                break;
            }
        }
        cout << goal << endl;
    }
    return 0;
}