#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid; // Element found, return index
        }
        else if (arr[mid] < x)
        {
            return binarysearch(arr, x, mid + 1, high); // Discard the left half
        }
        else
        {
            return binarysearch(arr, x, low, mid - 1); // Discard the right half
        }
    }
    return -1; // Element not found
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int result = binarysearch(arr, x, 0, n - 1);
    if (result == -1)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found at index " << result << endl;
    }
    return 0;
}
