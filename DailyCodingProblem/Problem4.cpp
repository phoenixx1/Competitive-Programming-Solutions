/*
Asked by Stripe.

Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.
*/

// author @Nishant
#include <bits/stdc++.h>
using namespace std;

void findMissing(int n, vector<int> arr, int max);

int main()
{
    int n;
    cout << "Total number of numbers: ";
    cin >> n;
    cout << "Enter numbers: ";
    vector<int> arr(n);
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    findMissing(n, arr, max);
    return 0;
}

void findMissing(int n, vector<int> arr, int max)
{
    vector<bool> status(max, false);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            status[arr[i]] = true;
    }
    for (int i = 1; i < max; i++)
    {
        if (!status[i])
        {
            cout << i << endl;
            return;
        }
    }
    cout << max + 1 << endl;
}