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
        int count = 0, k = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == 'P' && k > -1)
                count = max(count, i - k);
            else if(s[i] == 'A')
                k = i;
        }
        cout << count << endl;
    }
    return 0;
}