//author @Nishant

#include<bits/stdc++.h>

using namespace std;

bool even(char ch){
    if((ch - '0') % 2 == 0)
        return true;
    else
        return false;
}

int main(){
    int i, j, k;
    int n, m;
    string s;

    cin >> n >> s;

    int cnt = 0;
    for(i = 0; i < n; i++){
        if(even(s[i]))
            cnt++;
    }

    int a[n];
    memset(a, 0, sizeof(a));

    for(i = n - 2; i >= 0; i--){
        if(even(s[i + 1]))
            a[i] = a[i + 1] + 1;
        else
            a[i] = a[i + 1];
    }

    for(i = 0; i < n; i++)
        cnt += a[i];

    cout << cnt;

    return 0;
}