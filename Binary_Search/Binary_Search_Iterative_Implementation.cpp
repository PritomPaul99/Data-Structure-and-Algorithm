#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &arr, int n, int f)
{
    int lo = 0, hi = n - 1;

    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;

        if (arr[mid] < f)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }

    if (arr[hi] == f)
        return hi;
    else if (arr[lo] == f)
        return lo;
    else
        return -1;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int find;
    cin >> find;

    int pos = binarySearch(arr, n, find);

    if (pos == -1)
        cout << "Not Found!" << endl;
    else
        cout << pos << endl;
}