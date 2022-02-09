#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n1, n2;
    cin >> n1 >> n2;
    string ans = "";
    for (int i = 0; i < n1.size(); i++)
    {
        if (n1[i] == n2[i])
        {
            ans += "0";
        }
        else
        {
            ans += "1";
        }
    }
    cout << ans;
    return 0;
}