//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int temp = n;
        int i = 1;
        vector<int> a;
        while(n){
            int temp = n % 10;
            if(temp != 0){
                a.push_back(temp * i);
            }
            i *= 10;
            n /= 10;
        }
        cout << a.size() << endl;
        for(int x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}