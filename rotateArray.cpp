#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArr(int arr[], int n, int k)
{

    k = k % n;

    int ans[k];
    for (int i = 0; i < k; i++)
    {
        ans[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k; i < n; i++)
    {
        arr[i] = ans[i - (n - k)];
    }
}

int main()
{

    // vector<int> arr = {10, 20, 30, 40, 50, 60};
    // int n = arr.size();
    // int k = 3;
    // rotateArray(arr, n, k);

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;

    rotateArr(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}