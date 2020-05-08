//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    vector<int>::iterator it;
    while((a[0] <= k || a[a.size() - 1] <= k) && !a.empty()){
        if(a[0] <= k){
            it = a.begin();
            a.erase(it);
            count++;
        }else if(a[a.size() - 1] <= k){
            it = a.end() - 1;
            a.erase(it);
            count++;
        }
    }
    cout << count;
    return 0;   
}