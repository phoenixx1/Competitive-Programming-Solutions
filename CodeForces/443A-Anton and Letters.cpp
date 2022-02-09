#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    set<char> st;
    while (cin >> x)
    {
        if (isalpha(x))
            st.insert(x);
    }
    cout << st.size();
    return 0;
}