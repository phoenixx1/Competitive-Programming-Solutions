//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    if(*min_element(a.begin(), a.end()) < *max_element(b.begin(), b.end())){
        int temp = r / *min_element(a.begin(), a.end());
        r -= temp**min_element(a.begin(), a.end());
        r += temp**max_element(b.begin(), b.end());
    }
    cout << r << endl;
    return 0;
}
