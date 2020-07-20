//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == '>'){
            cout << 0 << endl;
        }else{
            int count = 0, ans = 0;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '<'){
                    ++count;
                }
                if(s[i] == '>'){
                    --count;
                    if(count == 0){
                        ans = max(ans, i + 1);
                    }
                    if(count < 0){
                        break;
                    }
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}