#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &arr, int x, int lo, int hi)
{
    if (hi >= lo)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, x, lo, mid - 1);

        return binarySearch(arr, x, mid + 1, hi);
    }

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

    int pos = binarySearch(arr, find, 0, n - 1);

    if (pos == -1)
        cout << "Not Found!" << endl;
    else
        cout << pos << endl;
}