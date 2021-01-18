/*
Asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

// author @Nishant
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Count of numbers in array: ";
    cin >> n;
    cout << "k: ";
    cin >> k;
    map<int, int> a;
    bool status = false;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp] += 1;
        if (a[temp] != 0 && a[k - temp] != 0)
        {
            status = true;
        }
    }
    if (status)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}