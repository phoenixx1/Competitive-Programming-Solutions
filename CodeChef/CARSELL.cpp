//author @Nishant

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        sort(p, p + n);
        long long int profit = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            p[i] = p[i] - (n - i - 1);
            if (p[i] < 0)
                p[i] = 0;
            profit += p[i];
        }
        cout << profit % MOD << endl;
    }
}