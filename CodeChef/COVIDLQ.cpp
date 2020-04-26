//author @Nishant

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, i1, i2;
        bool flag = false;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (count == 0)
                {
                    i1 = i;
                    count++;
                    continue;
                }
                else
                {
                    i2 = i;
                    if (i2 - i1 >= 6)
                    {
                        flag = true;
                        i1 = i2;
                        continue;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}