#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> arr, int n, int k)
{
    cout << "Calling function" << endl;
    vector<int> ans(n);

    // for (int i = 0; i < n; i++)
    // {
    //     int j = (i + k) % n;
    //     ans[j] = arr[i];
    // }
    // arr = ans;

    for (int index = 0; index < n; index++)
    {
        int newIndex = (index + k) % n;
        ans[newIndex] = arr[index];
    }
    arr = ans;
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50, 60};
    int n = arr.size();
    int k = 3;
    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}