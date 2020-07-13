// author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> cars(n);
        for(int i = 0; i < n; i++){
            cin >> cars[i];
        }
        int count = 1;
        int temp = cars[0];
        for(int i = 1; i < n; i++){
            if(cars[i] < temp){
                count++;
                temp = cars[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}