// author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, k;
    int n, m, t;

    cin >> t;
    while(t--){
        long long a, b, c;
        long long a2, b2, c2, temp;
        long long ans = -1;

        cin >> a >> b >> c;

        int d[] = {1, 0, -1};
        for(i = 0; i < 3; i++){
            a2 = a + d[i];
            for(j = 0; j < 3; j++){
                b2 = b + d[j];
                for(k = 0; k < 3; k++){
                    c2 = c + d[k];
                    temp = abs(a2 - b2) + abs(a2 - c2) + abs(b2 - c2);
                    if(ans == -1 || temp < ans)
                        ans = temp;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}