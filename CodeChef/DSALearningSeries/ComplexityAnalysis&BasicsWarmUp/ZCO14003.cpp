// author @Nishant

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin >> n;
    vector<ll> budget(n);
    for(ll i = 0; i < n; i++){
        cin >> budget[i];
    }
    sort(budget.begin(),  budget.end());
    ll maxProfit = 0;
    for(ll i = 0; i < n; i++){
        ll temp = budget[i];
        if(maxProfit < temp * (n - i)){
            maxProfit = temp * (n - i);
        }
    }
    cout << maxProfit;
    return 0;
}