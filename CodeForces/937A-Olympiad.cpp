//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> a;
    for(int i = 0 ; i < n; i++){
        int temp;
        cin >> temp;
        if(temp > 0){
            a.insert(temp);
        }
    }
    cout << a.size();
    return 0;
}