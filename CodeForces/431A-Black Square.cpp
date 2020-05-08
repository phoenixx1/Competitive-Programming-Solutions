//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4], sum = 0;
    string s;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> s;
    for (int i = 0; i < s.size(); i++) {
        int temp =  s[i] - 49;
        sum += arr[temp];
    }
    cout << sum;
    return 0;
}