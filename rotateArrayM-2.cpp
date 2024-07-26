#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int> arr, int n, int k)
{
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end() + k);
    reverse(arr.begin() + k, arr.end());
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int k = 3;
    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}