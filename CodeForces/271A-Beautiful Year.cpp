#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int j = x + 1; j < 9020; j++)
    {
        set<int> st;
        int num = j;
        while (num != 0)
        {
            st.insert(num % 10);
            num = num / 10;
        }
        if (st.size() == 4)
        {
            cout << j;
            break;
        }
    }
    cout << "";
    return 0;
}