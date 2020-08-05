//author @Nishant

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxAr = 0;
    cin >> n;
    vector<int> a(100001, 500);
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a[x] = min(a[x], y);
    }
    stack<int> st;
    vector<int> right(100001, 100000), left(100001, 0);
    for (int i = 1; i < 100001; i++){
        while (!st.empty() && a[i] <= a[st.top()])
        {
            st.pop();
        }
        left[i] = st.size() ? st.top() : 0;
        st.push(i);
    }
    st = stack<int>();
    for (int i = 100000; i >= 0; i--){
        while (!st.empty() && a[i] <= a[st.top()])
        {
            st.pop();
        }
        right[i] = st.size() ? st.top() : 100000;
        st.push(i);
    }
    for (int i = 0; i <= 100000; i++){
        maxAr = max(maxAr, a[i] * (right[i] - left[i]));
    }

    cout << maxAr << endl;

    return 0;
}