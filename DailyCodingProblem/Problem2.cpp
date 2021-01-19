/*
Asked by Uber.

Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/
// author @Nishant
#include <bits/stdc++.h>
using namespace std;

void findProduct(int n, vector<int> a)
{
    if (n == 1)
    {
        cout << 0;
        return;
    }
    int i, temp = 1;

    vector<int> ans(n, 1);

    for (i = 0; i < n; i++)
    {
        ans[i] = temp;
        temp *= a[i];
    }

    temp = 1;

    for (i = n - 1; i >= 0; i--)
    {
        ans[i] *= temp;
        temp *= a[i];
    }
    cout << "Output: ";
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Length of array: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    findProduct(n, a);
    return 0;
}