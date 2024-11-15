#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArr(int arr[], int n, int k)
{
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