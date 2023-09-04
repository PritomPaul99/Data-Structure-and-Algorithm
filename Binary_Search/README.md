# Binary Search

Binary search is a searching algorithm. Works on monotonic functions.

> `What is a Monotonic function?`  
A function that is only in increasing or decreasing order. Such as,  
[1, 2, 3, 4, 5, 6] or [6, 5, 4, 3, 2, 1]

## Implementation

There are mainly two way to implement `Binary Search`,

- Iterative Method
- Recursive Method

## Iterative Method

In C++:

```cpp
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
```

## Recursive Method

```cpp
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
```

### Complexity: O(log(n))
