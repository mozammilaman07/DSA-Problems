#include <iostream>
using namespace std;

int findPivotIndex(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int lsum = 0;
        int rsum = 0;

        for (int j = 0; j < i; j++)
        {
            lsum = lsum + arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            rsum = rsum + arr[j];
        }
        if (lsum == rsum)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = 6;

    int ans = findPivotIndex(arr, n);
    cout << "index found at : " << ans << endl;
}
