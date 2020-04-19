//@author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> initial(n);
        set<int> ans;
        for(int i=0; i<n; i++){
            cin >> initial[i];
        }
        for(int i=1; i<pow(2,n); i++){
            bitset<8> x(i);
            vector<int> tempNo;
            for(int i=0; i<x.size(); i++){
                if(x[i] == 1){
                    tempNo.push_back(initial.at(i));
                }
            }
            ans.insert(accumulate(tempNo.begin(), tempNo.end(), 0));
        }
        cout << ans.size()+1 << endl;
    }
    return 0;
}